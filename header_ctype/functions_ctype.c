#include <stdio.h> 
#include <ctype.h> 
#define UPPER_LIMIT 0xFF

/*
  characters from 0 to 255 and a
  notification of whether they have
  the attributes tested.
*/

int main(void) { 
    int ch; 
    for ( ch = 0; ch <= UPPER_LIMIT; ++ch ) { 
       printf("%3d ", ch); 
       printf("%#04x ", ch); 
       printf(" %c", isprint(ch) ? ch : ' '); 
       printf("%3s ", isalnum(ch) ? "Alphanumeric" : " "); 
       printf("%2s ", isalpha(ch) ? "Alphabetic" : " "); 
       printf("%2s", iscntrl(ch) ? "Control" : " "); 
       printf("%2s", isdigit(ch) ? "Digit" : " "); 
       printf("%2s", isgraph(ch) ? "Graphic" : " "); 
       printf("%2s ", islower(ch) ? "Lower" : " "); 
       printf("%3s", ispunct(ch) ? "Punctuation" : " "); 
       printf("%2s", isspace(ch) ? "Space" : " "); 
       printf("%3s", isprint(ch) ? "Printable" : " "); 
       printf("%2s ", isupper(ch) ? "Upper" : " "); 
       printf("%2s ", isxdigit(ch) ? "Hex" : " "); 
 
       putchar('\n'); 
     } 
}