#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
//version 3 (no longer has the manual hex and binary conversion)
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("USAGE: ./bitcount filename\n");
        return 1;
    }
    char *check = argv[1];
    int fRead = open(check, O_RDONLY);
    if (fRead == -1)
    {
        perror(argv[1]);
        return 2;
    }
    unsigned char c[1024];
    int bytes, hexDigit;
    int bitCountVal = 0;
    char hex[5];
    while ((bytes = read(fRead, c, 1024)))
    {
        int index;
        for (index = 0; index<bytes; index++){
            while(c[index]){
                if ((c[index] & 0x1) == 1) { // https://stackoverflow.com/questions/9867198/determining-number-of-set-bits-in-a-char 
                    bitCountVal++;
                }
                c[index] = c[index]>>1;
            }
        }

}

close(fRead);
printf("%i\n", bitCountVal);
}