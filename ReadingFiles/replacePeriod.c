#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fread = fopen("sample.txt","r");
    FILE *fwrite = fopen("newtext.txt","w");

    if (fread == NULL || fwrite == NULL){
        printf("One of the files could not open");
        return -1;
    }

    char c;
    while((c=fgetc(fread))!= EOF){
        if (c=='.'){
            c = '!';
        }
        fputc(c, fwrite);
    }
    fclose(fread);
    fclose(fwrite);
}