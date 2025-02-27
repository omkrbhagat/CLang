#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <sqlite3.h>

int main() {
    char cwd[PATH_MAX];
    
    #ifdef _POSIX_VERSION
    chdir("/storage/emulated/0/src/c/sqlite3/");
    #elif _WIN32
    chdir("%USERPROFILE%\\Desktop\\src\\c\\sqlite3\\");
    #endif
    
    getcwd(cwd, PATH_MAX);
    printf("pwd: %s\n", cwd);
    printf("SQLite Version: %s\n", sqlite3_libversion());
    
    /*
    The sqlite3 structure defines a database handle.
    Each open SQLite database is represented by a database handle.
    
    The sqlite3_stmt structure represents a single SQL statement.
    */
    
    sqlite3 *DB;
    sqlite3_stmt *RES;
    int rc = 0;
    
    /*
    the sqlite3_open function opens a new database connection.
    takes two parameters: DB name, DB handle.
    */
    
    rc = sqlite3_open("database.db", &DB);
    //rc = sqlite_open(":memory:", &DB);
    if(rc != SQLITE_OK) {
        //printf("Database cannot opened: %s\n", sqlite3_errmsg(DB));
        fprintf(stderr, "Database can't opened: %s\n", sqlite3_errmsg(DB));
        //close the DB handle
        sqlite3_close(DB);
        return 1;
    }
    /*
    Get the version of SQLite DB using SQL Query.
    The SQLITE_VERSION query is used to get the version of SQLite Library.
    
    Before an SQL statement is executed, it must be first compiled into a
    byte-code with one of the sqlite3_prepare* functions.
    sqlite3_prepare() function is deprecated.
    
    the sqlite3_prepare_v2 function takes 5 parameters:
    i) DB handle obtained from the sqlite3_open function.
    ii) SQL statement to be compiled.
    iii) Maximum length of SQL statement measured in bytes.
    Passing -1 causes the SQL string to be read up to the first zero
    terminator which is the end of the string here.
    iv) statement handle: point to the precompiled statement if the
    sqlite3_prepare_v2 runs successfully.
    v) pointer to the unused portion of the SQL statement.
    Only the first statement of the SQL string is compiled,
    so the parameter points to what is left uncompiled.
    We pass 0 since the parameter is not important for us.
    On success, sqlite3_prepare_v2 returns SQLITE_OK.
    */
    rc = sqlite3_prepare_v2(DB, "select SQLITE_VERSION()", -1, &RES, 0);
    if(rc != SQLITE_OK) {
        printf("Failed to get data: %s\n", sqlite3_errmsg(DB));
        sqlite3_close(DB);
        return 1;
    }
    
    /*
    the sqlite3_step runs the SQL statement.
    SQLITE_ROW indicates that there is another row ready.
    Our SQL statement returns only one row of data, therefore,
    we call this function only once.
    */
    
    rc = sqlite3_step(RES);
    if(rc == SQLITE_ROW) {
        printf("%s\n", sqlite3_column_text(RES, 0));
    }
    
    //the sqlite3_finalize function destroys the prepared statement object.
    
    sqlite3_finalize(RES);
    //close the DB connection.
    sqlite3_close(DB);
    
    return 0;
}