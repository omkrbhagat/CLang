/* 
    Author: Omkar Bhagat
    Date: 11th Feb 2022
*/

#include <stdio.h>

int main() {
    int p,n;
    float r,si;
   
    p = 1000;
    n = 3;
    r = 8.5;
    
// formula for Simple Interest
    si=p*r*n/100;
    printf("%f", si);
    return 0;
}