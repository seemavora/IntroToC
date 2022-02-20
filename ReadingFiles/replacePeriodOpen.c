#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h> // for open
#include <unistd.h> // for close

int main(){
    int fdRead = open("sample.txt", O_RDONLY);
    int fdWrite = open("newtext2.txt", O_WRONLY |O_CREAT, S_IRUSR | S_IWUSR);

    if(fdRead == -1 || fdWrite == -1){
        printf("One file wouldn't open! \n");
        return -1;
    }
char c;
int bytes;
    while((bytes = read(fdRead, &c, sizeof(c)))){
        if (c=='.'){
            c = '!';
        }
        write(fdWrite, &c, sizeof(c));
    }
    close(fdRead);
    close(fdWrite);
}