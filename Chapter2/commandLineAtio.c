#include <stdio.h>
// very simple code that will take in a parameter for the amount of arguments that exist
#include <stdlib.h>
int main(int argc, char *argv[])
{
    char *check = argv[1];
    printf("%s \n", check);
    int x = atoi(check);
    printf("%d \n", x);
    int i;
    // int check = atoi(range);
    // printf("%d \n",check);
    for (i = 0; i < x; ++i)
    {
        printf("Hello World - %d\n", argc); // prints the number of arguments
    }
    // by default there is one arg which is the name of the file
}