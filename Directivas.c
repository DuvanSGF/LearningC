// Directivas del procesador y Variables 

//Librerias
#include<stdio.h>
#include<math.h>

// Macros: Nos ayuda a definir una varible que utilizaremos en el programa
#define PI 3.1416

int y = 5; // Variable Global

int main(){
	int x = 10;// variable local -- esta dentro de la funcion Main -- solo se utiliza en esta funcion
	
	float suma = 0;
	
	suma = PI + x;
	
	printf("La suma es: %.3f", suma);
	
	
	
	return 0;
}
