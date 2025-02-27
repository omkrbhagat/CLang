#include <stdio.h>

int main() {
   int a = 7 ;
   printf("Enter a number: ");
   scanf("%d",&a);
   if(a == ( a>>1 ) << 1){
      printf("Number %d is even.\n",a);
   }else{
       printf("Number %d is odd.\n",a);
   }
    // below is short hand 
   // a==(a>>1)<<1? printf("Number %d is even.\n",a):printf("Number %d is odd.\n",a);
}