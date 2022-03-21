#include <stdio.h>
#include <sys/wait.h>

int main(){

    int status;
    int *child_status = &status;
    pid_t  pid_of_child = wait(child_status);
}