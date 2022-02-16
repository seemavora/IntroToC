#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[]){
    int i[] = {1,2,3}; // is is a array
    int *ptr = i;
    printf("%p %p\n",i,ptr);
    int rc = fork();
    if (rc == -1){
        printf("cant work \n");
    }
    else if(rc == 0){
        printf("i am the child \n");
    }
    else{
        printf("i am the parent of %d\n", rc);
    }
    printf("%d\n", rc);
    //i++; // this will not work on its own 
    ptr++; // ptr increments by 4 bytes (int)
   printf("%p %d\n",ptr, ptr[0]);
    printf("%d\n",i[0]);
}