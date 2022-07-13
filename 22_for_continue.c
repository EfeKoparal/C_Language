#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() { // while da duzenleme yapmazsan sonsuz donguye girersin kodu dikkatli yazmalisin.
	int toplam =0;
	int i;
	
	for (i=0; i<=10; i++){
		if (i % 2 ==1){
			continue;
		}
		toplam += i;
	}

	printf("toplam: %d",toplam);

	return 0;
} 
