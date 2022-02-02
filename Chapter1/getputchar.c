#include <stdio.h>

int main(){
    int c;
   
    while( (c= getchar()) != EOF){ // EOF = end of file indicator
        putchar(c);
        printf("*\n");

    }
}