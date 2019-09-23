/*  Calcular la longitud de arco */

#include<stdio.h>

int main(){
	int choose;
	printf("LONGITUD DE CIRCUNFERERENCIA:\n1:Apartir del diametro\n2:Apartir del radio");
	scanf("%i", &choose);
	if (choose==1){
		double pi = 3.14159265358979323846, d, longitud;
		printf("Ingrese el valor del diametro: ");
		scanf("%lf", &d);
		longitud = d * pi;
		printf("La longitud de la circunferencia es: %.3lf", longitud,"cm.");
	}
	if(choose==2){
		double pi = 3.14159265358979323846, r, longitud;
		printf("Ingrese el valor del radio: ");
		scanf("%lf", &r);
		longitud = 2 * r * pi;
		printf("La longitud de la circunferencia es: %.3lf", longitud,"cm.");
	}else{
		printf("Estas equivocado");
			return 0;
	}

}
