// Tipos de Datos

#include<stdio.h>

int main(){
	
	char a = 'D'; // tama�o = 1 byte rango 0...255
	short b = -22; // Tama�o = 2 bytes Rango -128...127
	int c = 1024; // Tama�o = 2 bytes Rngo -32768...32767
	unsigned int d = 128; // Tama�o = 2 bytes Rango 0...65535 ... Solo numeros positivos
	long e  = 123456; // Tama�o = 4 bytes
	float f = 15.660; // tama�o = 4 bytes
	double g = 3214756394.12345; // Tama�o 8 bytes
	
	
	
	printf("El elemento es : %c\n", a); 
	printf("El elemento es : %i\n", b); 
	printf("El elemento es : %i\n", c); 
	printf("El elemento es : %i\n", d);
	printf("El elemento es : %li\n", e);
	printf("El elemento es : %.3f\n", f);
	printf("El elemento es : %lf\n", g);
	
	return 0; 
}
