#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    
    int islem;
    int bakiye = 1000;
    int tutar;
    
    printf("islem 1 paracek\n2 para yatir\n3 bakiye sorgu\n\n\n");
    scanf("%d",&islem);
    switch(islem) {
        
        case 1 :
            printf("Bakiyeniz : %d",bakiye);
            printf("\ncekilecek tutar:");
            scanf("%d",&tutar);
            if (tutar > bakiye){
                printf("bakiye yetersiz...");
                
            }else{
                bakiye -=tutar;
                printf("\npara cekildi bakiyeniz: %d",bakiye);
            
            }
            break;
        case 2:
            printf("Bakiyeniz : %d",bakiye);
            printf("\nyatirilacak tutar:");
            scanf("%d",&tutar);
            bakiye +=tutar;
            printf("para eklendi \nbakiyeniz: %d",bakiye);
            break;
        case 3:
            
            printf("bakiyeniz: %d",bakiye);
            break;
        default:
            printf("gecersiz islem..");    
            break;
    }
    
    
    return 0;
}
