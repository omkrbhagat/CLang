#include <ncurses.h>
#include <string.h>

int main(int argc, char *argv[]) {
    initscr();
    int rows, cols;
    char name[] = "Omkar";
    getmaxyx(stdscr, rows, cols);
    cbreak();
    mvprintw(0, 2,"Rows: %d\n", rows);
    mvprintw(1, 2,"Columns: %d\n", cols);
    
    mvprintw(rows/2, (cols-strlen(name))/2, "%s", name);
    getch();
    getch();
    refresh();
}