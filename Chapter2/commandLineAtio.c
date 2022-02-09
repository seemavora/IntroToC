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
    int c;
    char *read;
    char *text = NULL;
    ssize_t lenLine = 0;
    // int check = atoi(range);
    // printf("%d \n",check);
    while ((c=getchar()) != EOF){

    for (i = 0; i < x; ++i)
    {
        read = getline(&text, &lenLine,stdin); // prints the number of arguments
        printf("%s \n",read, lenLine-1);
        free(read);
    }

    }
    // by default there is one arg which is the name of the file
}