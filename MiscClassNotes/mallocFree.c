#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char *argv[]){

struct test_alloc{
    int size;
    char *ptr;
} tests [] ={
{100*1024},
{100*1024},
{100*1024},
{10*1024},
{10*1024},
{50*1024},
{50*1024},
{100*1024},

};

int free[] = {
    0,0,0,0,1,0,0,5
};

int main(){
    setlocale(LC_NUMERIC, "");
    getpid();
    int count = sizeof(tests)/ sizeof(Tests[0]);
    for (int i = 0; i <count; i++){
        if (frees[i] free(tests[frees[i]].ptr))
    }
}

}