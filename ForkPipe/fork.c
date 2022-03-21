#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
  
   int id = fork();
   int n;
   if (id == 0){
       n = 1;
   }else{
       n= 6;
   }

   int i;
   for(i = n; i<n +5; i ++){
       printf("")
   }
//    if (id != 0){
//        fork();
//    }
}