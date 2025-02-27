#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <sqlite3.h>

int main() {
    char cwd[PATH_MAX];
    
    #ifdef _POSIX_VERSION
    chdir("/storage/emulated/0/src/c/sqlite3/");
    #elif _WIN32
    chdir("%USERPROFILE%\\src\\c\\sqlite3\\");
    #endif
    
    getcwd(cwd, PATH_MAX);
    printf("pwd: %s\n", cwd);
    printf("SQLite Version: %s\n", sqlite3_libversion());
    
    sqlite3 *DB;
    char *errMsg;
    int rc = 0;
    
    rc = sqlite3_open("database.db", &DB);
    if(rc != SQLITE_OK) {
        fprintf(stderr, "Database can't opened: %s\n", sqlite3_errmsg(DB));
        sqlite3_close(DB);
        return 1;
    }
    
    char *sql = "DROP TABLE IF EXISTS Cars;" 
                "CREATE TABLE Cars(Id INT, Name TEXT, Price INT);" 
                "INSERT INTO Cars VALUES(1, 'Audi', 52642);" 
                "INSERT INTO Cars VALUES(2, 'Mercedes', 57127);" 
                "INSERT INTO Cars VALUES(3, 'Skoda', 9000);" 
                "INSERT INTO Cars VALUES(4, 'Volvo', 29000);" 
                "INSERT INTO Cars VALUES(5, 'Bentley', 350000);" 
                "INSERT INTO Cars VALUES(6, 'Citroen', 21000);" 
                "INSERT INTO Cars VALUES(7, 'Hummer', 41400);" 
                "INSERT INTO Cars VALUES(8, 'Volkswagen', 21600);";
    
    rc = sqlite3_exec(DB, sql, 0, 0, errMsg);
    if(rc != SQLITE_OK) {
        fprintf(stderr, "SQL Error: %s\n", errMsg);
        sqlite3_free(errMsg);
        sqlite3_close(DB);
        return 1;
    }
    
    sqlite3_close(DB);
    return 0;
}