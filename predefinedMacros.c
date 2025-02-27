#include <stdio.h>
#define PI 3.14

int main() {
   printf("Macro is : %f\n", PI);
   // standard Macros
   printf("%d\n", __LINE__);
   printf("%s\n", __DATE__);
   printf("%s\n", __TIME__);
   printf("%s\n", __FILE__);
   return 0; 
}
    
