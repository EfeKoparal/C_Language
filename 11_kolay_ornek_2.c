#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

    int a,b,c;
    
    float x1,x2,delta;
    
    printf("denklemin asini giriniz: ");
    scanf("%d",&a);
    
    printf("denklemin asini giriniz: ");
    scanf("%d",&b);
    
    printf("denklemin asini giriniz: ");
    scanf("%d",&c);
    
    printf("denkleminiz: %dx2 + %dx + %d",a,b,c);
    printf("\n1");
    sleep(1);
    printf("\n2");
    sleep(1);
    printf("\n3\n");
    sleep(1);
    
    delta = b*b -4*a*c;
    
    x1 = (-b + (sqrt(delta)))/ 2*a;
    x2 = (-b - (sqrt(delta)))/ 2*a;

    printf("denklemin kokleri x1 = %.2f , x2 = %.2f",x1,x2);    
    
    return 0;
}
