#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main (int argc, char *argv[]){

    int fd;
    fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);
    if (fd == -1){
       printf("failed to create and open file. \n");
       exit(1); 
    }

    write(fd, "hello world!\n", 13);

    close(fd);
    return 0;
}