#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    
    // 5 sayi ortalama
    
    int a,b,c,d,e;
    
    float aritmetik;
    
    printf("5 sayi giriniz: ");
    
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e );
    
    aritmetik = (a+b+c+d+e)/5.0;
    
    printf("girdiginiz sayilarin aritmetik ortalamasi : %.2f",aritmetik);
    
    return 0;
}
