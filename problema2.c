#include<stdio.h>
#include<math.h>

int main(){
	printf("Hallar el area del circulo?");
	double pi=3.1416, l, area, r;
	printf("\nIngresa la longitud de la circunferencia:");
	scanf("%lf", &l);
	r = l/(2*pi);
	//printf("r: %lf", r); Imprimir el R
	area = pi*pow(r, 2);
	printf("\nEl area del circulo es: %.2lf",area);
	printf("cm2");
	
	return 0;
	
}
