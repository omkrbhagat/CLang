#include <stdio.h>
#include <ctype.h>

/*
  SYNTAX: int isalpha(int c);
  DESC: Test for an alphabetic character
  Return Value:
  If Successful, returns nonzero
  If Unsuccessful, returns zero
*/

int isAlpha(const char *str) {
        while(*str) {
            if(!isalpha(*str)) {
                return 0;
            }
            str++;
        }
        return 1;
    }

int main() {
    char *name = "Omkar";
    printf("Result: %d\n", isAlpha(name));
}