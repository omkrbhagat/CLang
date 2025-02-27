#include <stdio.h>
#include <string.h>

/*
  SYNTAX: char *strrchr(const char *string, int c);
  DESC: Find the last occurrence (right side) of
  char (converted to char) in string
*/

int main() {
    char *path = "C:\\Users\\onkar\\src";
    char *res = strrchr(path, '\\');
    printf("Result: %s\n", res);
}