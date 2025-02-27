#include <stdio.h>
#include <stdbool.h>

/*
   A year is a leap year if it is a
   multiple of 400 and if it is a
   multiple of 4 but not a multiple
   of 100.
*/

bool checkYear(int year) {
    if(year % 400 == 0) {
        return 1;
    }else if(year % 4 == 0) {
        return 1;
    }else {
        return 0;
    }
}

int main() {
    int year;
    printf("\x1b[1;32mEnter a year : \x1b[0;0m");
    scanf("%d", &year);
    checkYear(year) ? printf("It's a leap year") : printf("Not a leap year");
}