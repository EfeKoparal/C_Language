#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    
// fibonacci

/* 
   a b c
       
   1 1 2
   1 2 3
   2 3 5
   3 5 8
   5 8 13
   8 13 21

*/
   
   int a,b,c,i;
   a=1;
   b=1;
   
    printf("1\n1\n");
   for (i=1;i<10;i++){
           c= a+b;
           printf("%d\n",c);
           a = b;
           b= c;
           
   }

    
    
    
    return 0;
}
