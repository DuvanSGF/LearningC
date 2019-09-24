#include<stdio.h>

int main(){
	printf("La rueda de un camion tiene 90 cm de radio. \nCuanto ha recorrido el camion cuando la rueda ha dado 100 vueltas?");
	
	
	double pi=3.1416, r, v, longitud;
	printf("\nIngresa el radio: ");
	scanf("%lf", &r);
	printf("Ingresa el numero de vueltas: ");
	scanf("%lf", &v);
	
	longitud = 2 * pi * r;
	printf("El camion ha recorrido: %.0lf",longitud);
	printf(" m.");
	
	return 0;
}
