#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

    // mod alma ==> % , cogu yerde stabildir...
    // ve ==> &&
    // veya ==> ||
    
    int sayi;
    
    printf("sayiyi giriniz:");
    scanf("%d",&sayi);
    
    
    if (sayi % 2 == 0 && sayi % 7 == 0)
    {
        printf("sayi 2 ve 7 ye ayni anda bolunebilir");
    }
    else
    {
        printf("sayimiz sayi 2 ve 7 ye ayni anda bolunemez.");
    }
    
    return 0;
}
