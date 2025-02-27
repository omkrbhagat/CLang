#include <stdio.h>
#include <time.h>

int main() {
    struct tm *ptr;
    //at this moment, `time_t t` doesn't hold any
    time_t t; // empty variable
    
    /*
      represents the no. of seconds elapsed since UNIX epoch:
      (00:00:00 UTC on 1 January 1970)
      
      below line can be replaced as :
      > time(t);
    */
    t = time(NULL); // Also, holds the current time in sec.
    //ptr = localtime(&t);
    ptr = gmtime(&t);
    //printf("%s\n", asctime(ptr));
    printf("%s\n", ctime(ptr));
}