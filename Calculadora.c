/* Pedir 2 numeros al usuario y sumarlos, restarlos, multiplicarlos y dividirlos.*/

#include<stdio.h>

int main(){
	
	int n1, n2, suma = 0, resta = 0, mult = 0, div = 0;
	
	printf("Ingresa dos numeros: ");
	scanf("%i %i", &n1, &n2);
	
	suma = n1 + n2;
	resta = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;
	
	printf("\nEl resultado de la suma es: %i", suma);
	printf("\nEl resultado de la resta es: %i", resta);
	printf("\nEl resultado de la multiplicacion es: %i", mult);
	printf("\nEl resultado de la division es: %i", div);
		
	return 0;
}
