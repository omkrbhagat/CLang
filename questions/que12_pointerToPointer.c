#include <stdio.h>

void fun1(char *s1, char *s2) {
  char *temp;
  temp = s1;
  s1 = s2;
  s2 = temp;
}

void fun2(char **s1, char **s2) {
  char *temp;
  temp = *s1;
  *s1 = *s2;
  *s2 = temp;
}

int main() {
  char *str1 = "Hi", *str2 = "Bye";
  
  /*
    fun1(char *s1, char *s2)
    Above function scope is local,
    so the value changed here won't
    affect actual parameters.
    So the values will be 'Hi Bye'.
  */
  fun1(str1, str2);
  printf("%s %s", str1, str2);

  /*
    fun2(char **s1, char **s2)
    In this function value is pointer
    to pointer, so it changes pointer
    of the actual value.
    So values will be 'Bye Hi'
  */
  fun2(&str1, &str2);
  printf("%s %s", str1, str2);

  return 0;
}