#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	int vize1,vize2,final;
	
	float okul_ortalama;
	
	float ders_ort;
	
	// ders notlarini hafizaya kaydetmek.
	
	printf("birinici vizeyi giriniz: ");
	scanf("%d",&vize1);
	printf("\nikinci vizeyi giriniz: ");
	scanf("%d",&vize2);
	printf("\nfinal giriniz: ");
	scanf("%d",&final);
	
	// ortalama almak
	
	
	ders_ort = ((vize1*3/10.0) + (vize2*3/10.0) + (final*4/10.0));
	
	printf("\n\nUniversite ortalamaniz: %.2f\n",ders_ort);
	
	
	if (ders_ort >= 90){
		printf("Harf Notunuz - 5 ve Ders Ortalamaniz : %f",ders_ort);
	}else if (ders_ort >= 50){
		printf("Harf Notunuz - 4 ve Ders Ortalamaniz : %f",ders_ort);
	}else{
		printf("hoca cok kizdi.mokoko birdahaki derse gelme %f",ders_ort);
	}
	
	
	return 0;
}
