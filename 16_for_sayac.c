#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    

    int sayi, i, faktoryel;
    
    faktoryel = 1;
    printf("Tam sayi giriniz:");
    scanf("%d",&sayi);
    
    for(i=1;i<=sayi;i++){
        faktoryel = faktoryel * i;
        
    }
    printf("\nsayimizin faktoryeli: %d", faktoryel);

    return 0;
}
