#include <stdio.h>
#include <unistd.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main() {
    char host_name[HOST_NAME_MAX + 1];
    struct hostent *entry;
    gethostname(host_name, sizeof(host_name));
    
    entry = gethostbyname(host_name);
    char *ip = inet_ntoa(*((struct in_addr *)entry->h_addr_list[0]));
    
    printf("Hostname: %s\n", host_name);
    printf("IP: %s\n", ip);
}