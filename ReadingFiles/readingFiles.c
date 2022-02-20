#include <stdio.h>
#include <stdlib.h>

int main (){
    char line[255]; // initial char array storing 255 characters
    FILE * fpointer = fopen("sample.txt", "r"); // r is the file mode, reading from the file

    fgets(line, 255, fpointer);
    printf("%s", line);
    fclose(fpointer);
    return 0;


}