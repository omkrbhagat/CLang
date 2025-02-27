#include <stdio.h>
#include <string.h>

/*
  Student is "structure type".
  members is "structure variables".
*/

/*
struct Student {
    char name[50];
    int age;
} members; //these are variables
*/

/*
  `typedef` keyword is used to create
  alias name for the data type.
  `typedef` keyword is commonly used
  structure to simplify the syntax of
  declaring variables.
*/


typedef struct Student {
    char name[50];
    int age;
} std_t; //here std_t is Alias


int main() {
    std_t members;
    
    /*
      You can also assign values to members
      of a structure variable at declaration time,
      in a single line.
      
      > std_t members = {"Omkar", 22};
    */
    
    /*
      Remember that strings in C are actually
      an array of characters, and unfortunately,
      you can't assign a value to an array like this:
      
      > members.name = "Omkar Bhagat";
      
      However, there is a solution for this.
      You can use `strcpy()` as follows :
    */
    
    strcpy(members.name, "Omkar Bhagat");
    printf("Name: %s\n", members.name);
    /*
      There are two types of operator used
       for accessing members of a structure :
       1) . - Member operator
       2) -> - Structure pointer operator
    */
}