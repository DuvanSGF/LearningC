#include<stdio.h>

int main(int argc, char** argv){
	FILE *arc;
	int x;
	arc=fopen("C://Ingenieria_Software//Web_Development//C//prueba1.txt", "a");
	printf("Digite el valor entero");
	scanf("%d", &x);
	fprintf(arc,"%d",x);
	fclose(arc);
	
	return 0;
	
}
