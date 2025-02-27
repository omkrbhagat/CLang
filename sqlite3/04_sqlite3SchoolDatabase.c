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
    char *errMsg = 0;
    int rec = 0;
    
    rec = sqlite3_open("school.db", &DB);
    if(rec != SQLITE_OK) {
        fprintf(stderr, "Database can't opened: %s\n", sqlite3_errmsg(DB));
        sqlite3_close(DB);
        return 1;
    }
    
    char *sql = "DROP TABLE IF EXISTS STUDENT;" 
                "CREATE TABLE STUDENT(rollNum INT, Name TEXT, Section varchar );" 
                "INSERT INTO STUDENTS VALUES(1, 'Arvind', 'A');" 
                "INSERT INTO STUDENT VALUES(2, 'Amit', 'C');" 
                "INSERT INTO STUDENT VALUES(3, 'Shivang', 'A');" 
                "INSERT INTO STUDENT VALUES(4, 'RAGHU', 'A');" 
                "INSERT INTO STUDENT VALUES(5, 'SACHIN', 'C');" 
                "INSERT INTO STUDENT VALUES(6, 'HITEN', 'B');";
    
    rec = sqlite3_exec(DB, sql, 0, 0, errMsg);
    if(rec != SQLITE_OK) {
        printf("SQL Error: %s\n", errMsg);
        sqlite3_free(errMsg);
        sqlite3_close(DB);
        return 1;
    }
    
    sqlite3_close(DB);
    return 0;
}