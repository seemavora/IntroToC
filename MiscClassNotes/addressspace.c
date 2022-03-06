#include <stdio.h>
#include <stdlib.h>

int global = 1;

void print_stack_addr(int depth){
    int local_var = depth;
    printf("dept = %d local_Var = %p\n", depth, &local_var);
    if (depth>0) print_stack_addr(depth-1);
}

int main (int argc, char **argv){
    printf("main is at %p\n", main);
    printf("argv is at %p\n", argv);
    printf("global is at %p\n", &global);
    printf("malloced at 1000 %p\n", malloc(1000));
    printf("malloced at 10000 %p\n", malloc(10000));
    printf("malloced at 10000 %p\n", malloc(100000));
    printf("malloced at 1000 %p\n", malloc(1000));
    
}