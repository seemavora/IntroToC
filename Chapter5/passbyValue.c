#include <stdio.h>
  
// This function swaps values pointed by xp and yp
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void wrongSwap (int z, int s){
    printf("we are swapping the wrong way\n");
    int temp2 = z;
    z = s;
    printf("this is z %d\n", z);
    s = temp2;
    printf("this is s %d\n", s);
}// wrongSwap doesn't work because of the way its referenced. -> this is because of call by value 

int main()
{
    int x, y;
    x = 5;
    y = 6;
    printf("\nBefore Swapping: x = %d, y = %d \n", x, y);
    swap(&x, &y);
    printf("\nAfter Swapping: x = %d, y = %d \n", x, y);
    int z, s;
    z = 1;
    s = 2;
    printf("\nBefore Swapping: z = %d, s = %d \n", z, s);
    wrongSwap(z, s);
    printf("\nAfter Swapping: z = %d, s = %d \n", z, s);
    return 0;
}