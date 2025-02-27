#include <stdio.h>
#include <string.h>

// define a struct type
struct structureType {
    char name[30];
    int age;
};

/*
   // struct type and struct variable
   // can also be defined as below
   struct structureName {
      char name[30];
      int age;
   }; structVar1, structVar2
*/

/*
   // `typedef` keyword to create
   // an alias name for the data type
   // it is commonly used with structures
   // to simplify the syntax of declaring variables
   struct Distance {
      int feet;
      float inch;
   };

   int main() {
      struct Distance d1, d2;
   }
   
   // above code is equivalent to this :
   typedef struct Distance {
      int feet;
      float inch;
   } distances;

   int main() {
      distances d1, d2;
   }
   
*/

/*
   There are two types of operator used
   for accessing members of a structure :
   1) . - Member operator
   2) -> - Structure pointer operator
*/


int main() {
    // now create a struct variable
    struct structureType structVar1;
    
    /*
       // can't use this because array type
       // char is not assignable
       structVar1.name = "Omkar Bhagat";
    */
    
    strcpy(structVar1.name, "Omkar Bhagat");
    structVar1.age = 21;
    printf("Name : %s\n", structVar1.name);
    printf("Age : %d\n", structVar1.age);
    return 0;
}
