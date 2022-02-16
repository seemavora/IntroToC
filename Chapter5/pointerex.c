#include <stdio.h>

int main(){
    int x = 7;
    printf("x is %d\n", x); 
    x = 14;
    printf("x is %d\n", x); 

    int *aptr = &x; // pointing to the address of x
    printf("x is %d\n", *aptr); // getting the value stored in the pointer -> dereferencing the variable
    printf("x is stored in memory location: %x\n", aptr);

    *aptr = 21;
    printf("x is %d %d\n", x, *aptr);
    
}