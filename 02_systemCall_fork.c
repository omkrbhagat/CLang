#include <stdio.h>
 
// Driver code
int main()
{
    pid_t child_id = fork();
    printf("Hello, World !\n");
    printf("ID is : %d\n", child_id);
}
