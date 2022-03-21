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
    return 0;
}