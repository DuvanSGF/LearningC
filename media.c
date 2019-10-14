/*Hacer un programa que me calcule la media aritmetica*/

#include<stdio.h>

int main(){
	
	int dato, dato1, dato2, media;
	printf("VAMOS A CALCULAR LA MEDIA PARA TRES DATOS:");
	printf("\nIngresa el primer dato: ");scanf("%i", &dato);
	printf("\nIngresa el segundo dato: ");scanf("%i", &dato1);
	printf("\nIngresa el tercer dato: ");scanf("%i", &dato2);	
	
	media = (dato + dato1 + dato2)/3;
	printf("La media es: %i", media);
	
	
	return 0; 
}
