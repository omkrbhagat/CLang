#include <stdio.h>
#include <unistd.h>

/* POSIX Standard Library
   Not available on MinGW */
#include <netdb.h>

int main() {
    struct hostent *host_info;
    int i;
    host_info = gethostbyname("www.opera.com");
    printf("\033[1;35mOfficial Name :\033[0;0m %s\n", host_info->h_name);
    
    printf("\033[1;35mAliases :\033[0;0m ");
    for(i = 0; host_info->h_aliases[i] != NULL; i++) {
        printf("\t- %s\n", host_info->h_aliases[i]);
    }
}