#include <stdio.h>

int main() {
    chdir("/storage/emulated/0/Documents/");
    FILE *fp;
    fp = fopen("fileName.txt", "w");
    fprintf(fp, "Apple");
    fclose(fp);
    
    fp = fopen("fileName.txt", "r");
    
    int i;
    while((i=fgetc(fp)) != EOF) {
        printf("%c", i);
    }
    fclose(fp);
    return 0;
}