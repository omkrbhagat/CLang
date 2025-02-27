#include <ncurses/ncurses.h>

int main() {
    initscr();
    start_color();
    init_pair(1, COLOR_CYAN, COLOR_BLACK);
    attron(COLOR_PAIR(1));
    printw("Hello, World !");
    attroff(COLOR_PAIR(1));
    refresh();
    getch();
    endwin();
}