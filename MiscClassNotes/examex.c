#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    // for (int i = 0; i <2; i++){
        
    //     int pid = fork();
    //     if (pid == 0){ // this code will create 3 processes
    //         printf("hi\n");
    //         exit(0);
    //     }
    // }
    // printf("hi\n");

    int i;
    for (i = 0; i <3; i++){
        int pid = fork();
        printf("pid: %d\n", pid);
        printf("--------\n");
        
    }
    printf("hi\n");
}
