#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main() {
    time_t start, end;
    start = time(NULL);
    sleep(10);
    end = time(NULL);
    
    printf("Diff: %d\n", (end - start));
}