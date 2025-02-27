#include <stdio.h>
#include <unistd.h>

int main() {
   int num = 65;
   
   #ifdef _POSIX_VERSION
   chdir("/storage/emulated/0/Documents/");
   #elif _WIN32
   chdir("C:\\Users\\onkar\\src\\c\\");
   #endif
   
   FILE *fptr; 
   fptr = fopen("test.txt", "w");

   if (fptr == NULL) {
      perror("Error: ");
   }else {
      fwrite(&num, 1, 1, fptr);
   }
   
   fclose(fptr);
   return 0;
}
