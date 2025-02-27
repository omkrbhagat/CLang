#include <stdio.h>

int main() {
    int num, result;
    printf("Enter number : ");
    scanf("%d", &num);
    
    if(num < 0) {
      result = -(num%10);
    }else {
      result = num%10;
    }
    
    printf("Last digit is : %d", result);
}