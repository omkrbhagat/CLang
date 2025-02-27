#include <stdio.h>

int main() {
   // prefix literals
   int hex = 0x1A;
   int oct = 016;
   int bin = 0b11;
   printf("Hexadecimal : %d\n", hex);
   printf("Octal : %d\n", oct);
   printf("Binary : %d\n", bin);
   // suffix literals
   unsigned int unsg = 124u; // either upper or lowercase
   long int lngint = 124l; // either upper or lowercase
   long long int lnglngint = 124ll; // either upper or lowercase
   printf("Unsigned : %d & Size is %d\n", unsg, sizeof(unsg));
   printf("Long : %d & Size is %d\n", lngint, sizeof(lngint));
   printf("Long Long : %d & Size is %d\n", lnglngint, sizeof(lnglngint));
   // floating literals
   float a = 10.5f; // 2.1×10⁴ = 21000
   double b = 10.515; // 200.1×10–⁸⁰
   long double c = 10.515f; // 26.0625×2² = 104.25
   float d = 2.1e4f;
   double e = 200.1e-80;
   double f = 0x1A.1p2;
   printf("%g\n%g\n%g\n%g\n%g\n%g", a, b, c, d, e, f);
   return 0; 
}
    