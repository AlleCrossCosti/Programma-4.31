#include <stdio.h>
#include <unistd.h>

#define cls printf("\033[H\033[2J")

int main() {
    
    int i, iMax;
    
    i = 0;
    iMax = 10;
    
    while(i <= iMax)
       {
       printf("Sto contando...%d\n" , i);
       i++;
       sleep(1);
       cls;
       }
       
   printf("Ho contato fino a %d" , iMax);
   return 0;
   
   }
