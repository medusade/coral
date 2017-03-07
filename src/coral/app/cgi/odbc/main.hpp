///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2017 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 2/27/2017
///////////////////////////////////////////////////////////////////////
#ifndef _CORAL_APP_CGI_ODBC_MAIN_HPP
#define _CORAL_APP_CGI_ODBC_MAIN_HPP

#include "etiris/db/ODBC.hpp"
#include "coral/app/cgi/main.hpp"

namespace coral {
namespace app {
namespace cgi {
namespace odbc {

typedef inet::cgi::main_implements main_implements;
typedef inet::cgi::main main_extends;
///////////////////////////////////////////////////////////////////////
///  Class: main
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS main: virtual public main_implements, public main_extends {
public:
    typedef main_implements Implements;
    typedef main_extends Extends;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    main()
    : content_type_(this->content_type_xml()),
      source_("Data"), table_("Table"), select_("*"),
      query_("select ", select_.chars(), " from ", table_.chars(), NULL),
      mode_(SQL_MODE_READ_ONLY /*SQL_MODE_READ_WRITE*/) {
        memset(data_, 0, data_size);
        memset(label_, 0, data_size);
        memset(statement_, 0, data_size);
        memset(error_, 0, data_size);
        data_len_ = 0;
        error_num_ = 0;
        num_info_ = 0;
        label_len_ = 0;
        error_len_ = 0;
    }
    virtual ~main() {
    }

protected:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int run_cgi(int argc, char_t** argv, char_t** env) {
        const char_t* sourceChars = source_.chars();
        const char_t* queryChars = query_.chars();
        const char_t* chars = 0;
        size_t length = 0;
        string_t on, onWhere;

        this->set_content_type(this->content_type_text());

        if ((chars = get_param_source(length))) {
            sourceChars = chars;
        }
        if ((chars = get_param_query(length))) {
            queryChars = chars;
        } else {
            bool query_changed = false;
            if ((chars = get_param_table(length))) {
                table_.assign(chars);
                query_changed = true;
            }
            if ((chars = get_param_select(length))) {
                select_.assign(chars);
                query_changed = true;
            }
            if ((chars = get_param_where(length))) {
                where_.assign(chars);
                query_changed = true;
            }
            if ((query_changed)) {
                query_.assignl
                ("select ", select_.chars()," from ", table_.chars(),
                 ((where_.has_chars())?(" where "):("")),
                 ((where_.has_chars())?(where_.chars()):("")), NULL);
                queryChars = query_.chars();
            }
        }

        onWhere.assignl(" where sourceChars = \"", sourceChars, "\" queryChars = \"", queryChars, "\"", NULL);

        on.assignl("db_environment_.Create()", onWhere.chars(), NULL);
        if (Success(db_environment_.Create(), on.chars())) {

            on.assignl("db_connection_.Create(db_environment_)", onWhere.chars(), NULL);
            if (Success(db_connection_.Create(db_environment_), on.chars())) {

                on.assignl("db_connection_.SetConnectOption(SQL_ACCESS_MODE, mode_)", onWhere.chars(), NULL);
                Success(db_connection_.SetConnectOption(SQL_ACCESS_MODE, mode_), on.chars());

                on.assignl("db_connection_.Connect(sourceChars = \"", sourceChars, "\")", onWhere.chars(), NULL);
                if (Success(db_connection_.Connect(sourceChars), on.chars())) {

                    on.assignl("db_query_.Create(db_connection_)", onWhere.chars(), NULL);
                    if (Success(db_query_.Create(db_connection_), on.chars())) {

                        on.assignl("db_query_.Execute(queryChars = \"", queryChars, "\")", onWhere.chars(), NULL);
                        if (Success(db_query_.Execute(queryChars), on.chars())) {

                            query_output(argc, argv, env);
                        }
                        db_query_.Destroy();
                    }
                    db_connection_.Disconnect();
                }
                db_connection_.Destroy();
            }
            db_environment_.Destroy();
        }
        return 0;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int query_output(int argc, char_t** argv, char_t** env) {
        long cols = 0, rows = 0;
        string_t index, row_index;

        this->set_content_type(content_type_.chars());

        this->outln("<results>");

        if (0 < (cols = db_query_.Columns())) {

            this->outln("<columns>");

            for (long i = 1; i <= cols; i++) {

                this->outl("<column index=\"", index.assign_signed(i).chars(), "\" label=\"", NULL);

				data_[data_size-1] = 0;
                if (db_query_.ColumnInfo
                    (i, SQL_COLUMN_LABEL, label_,
                     data_size-1, label_len_, num_info_)) {

                    this->out(label_);
                }
                this->outln("\"/>");
            }
            this->outln("</columns>");

            if (db_query_.Fetch()) {

                this->outln("<rows>");

                do {
                    this->outl("<row index=\"", row_index.assign_signed(++rows).chars(), "\">", NULL);
                    this->outln();

                    for (long i = 1; i <= cols; i++) {

                        this->outl("<column index=\"", index.assign_signed(i).chars(), "\" label=\"", NULL);

                        data_[data_size-1] = 0;
                        if (db_query_.ColumnInfo
                            (i, SQL_COLUMN_LABEL, label_,
                             data_size-1, label_len_, num_info_)) {

                            this->out(label_);
                        }
                        this->out("\">");

                        data_[data_size-1] = 0;
                        if (db_query_.ColumnInfo
                            (i,SQL_COLUMN_DISPLAY_SIZE, label_,
                             data_size-1, label_len_, num_info_)) {

                            if (0 < (num_info_)) {

                                data_[data_size-1] = 0;
                                if ((db_query_.GetData
                                     (i,SQL_C_CHAR, data_, data_size-1, data_len_))) {

                                    this->out(data_);
                                }
                            }
                        }
                        this->outln("</column>");
                    }
                    this->outln("</row>");

                } while (db_query_.Fetch());

                this->outln("</rows>");
            }
        }
        this->outln("</results>");
        return 0;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    BOOL Success(BOOL success, const char* on = 0) {
        if (!success) {
            if ((db_environment_.Error
                (db_connection_, db_query_, statement_,
                 error_num_, error_, data_size, error_len_))) {
                CORAL_LOG_ERROR("...failed with statement = \"" << statement_ << "\" error = \"" << error_ << "\" from db_environment_.Error(...)" << ((on)?(" on "):("")) << ((on)?(on):("")));
                this->outl("...failed with statement = \"", statement_, "\" error = \"", error_, "\" from db_environment_.Error(...)", ((on)?(" on "):("")), ((on)?(on):("")), NULL);
            } else {
                this->outl("...failed on db_environment_.Error(...)", ((on)?(" on "):("")), ((on)?(on):("")), NULL);
            }
        }
        return success;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual const char_t* get_param_source(size_t& length) const {
        const char_t* chars = get_form_parameter_value_has_chars
        (length, param_source_names());
        return chars;
    }
    virtual const char_t* get_param_table(size_t& length) const {
        const char_t* chars = get_form_parameter_value_has_chars
        (length, param_table_names());
        return chars;
    }
    virtual const char_t* get_param_select(size_t& length) const {
        const char_t* chars = get_form_parameter_value_has_chars
        (length, param_select_names());
        return chars;
    }
    virtual const char_t* get_param_where(size_t& length) const {
        const char_t* chars = get_form_parameter_value_has_chars
        (length, param_where_names());
        return chars;
    }
    virtual const char_t* get_param_query(size_t& length) const {
        const char_t* chars = get_form_parameter_value_has_chars
        (length, param_query_names());
        return chars;
    }


    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual const char_t** param_source_names() const {
        static const char_t* names[] = {
            "DataSource", "Data",
            0
        };
        return names;
    }
    virtual const char_t** param_table_names() const {
        static const char_t* names[] = {
            "DataTable", "Table",
            0
        };
        return names;
    }
    virtual const char_t** param_select_names() const {
        static const char_t* names[] = {
            "DataSelect", "Select",
            0
        };
        return names;
    }
    virtual const char_t** param_where_names() const {
        static const char_t* names[] = {
            "DataWhere", "Where",
            0
        };
        return names;
    }
    virtual const char_t** param_query_names() const {
        static const char_t* names[] = {
            "DataQuery", "Query",
            0
        };
        return names;
    }
    virtual const char_t** param_content_type_names() const {
        static const char_t* names[] = {
            "content_type",
            0
        };
        return names;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual const char_t* get_form_parameter_value_has_chars
    (size_t& length, const char_t** names, bool is_from_query_string = false) const {
        const char_t* value = 0;
        inet::http::form::field* f;
        if ((f = form().find(names))) {
            value = (f->value().has_chars());
            length = (f->value().length());
        }
        return value;
    }
    virtual const char_t* get_form_parameter_value_chars
    (size_t& length, const char_t** names, bool is_from_query_string = false) const {
        const char_t* value = 0;
        inet::http::form::field* f;
        if ((f = form().find(names))) {
            value = (f->value().chars());
            length = (f->value().length());
        }
        return value;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    enum { data_size = 1024 };
    typedef char data_t[data_size];

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    string_t content_type_, source_, table_, select_, where_, query_; int mode_;
    data_t data_, label_, statement_, error_;
    SDWORD data_len_, error_num_, num_info_;
    SWORD label_len_, error_len_;
    etiris::db::odbc::Environment db_environment_;
    etiris::db::odbc::Connection db_connection_;
    etiris::db::odbc::Query db_query_;
};

} // namespace odbc 
} // namespace cgi 
} // namespace app 
} // namespace coral 

#endif // _CORAL_APP_CGI_ODBC_MAIN_HPP 
