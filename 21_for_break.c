#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// normalde hata veriyordu stdbool.h include ettik gecti

int main() {
	
	int toplam=0;
	
	int i;
	
	int sayi;
	
	for (i=0; true; i++){ //hata verdi
		printf("bir sayi giriniz: (cikmak icin -1)");
		
		scanf("%d",&sayi);
		
		if (sayi== -1){
			printf("cikisiyapiliyor");
		
			
			break;
		}
		toplam += sayi;
	}
	printf("\ntoplam:%d",toplam);
	
	

	return 0;
}
