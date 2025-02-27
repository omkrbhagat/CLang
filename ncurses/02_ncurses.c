#include <ncurses/ncurses.h>

int main() {
    initscr();
    WINDOW *win = newwin(30, 30, 0, 0);
    refresh();
    box(win, 0, 0);
    wrefresh(win);
    getch();
    endwin();
}