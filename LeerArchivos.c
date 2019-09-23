
#include<stdio.h>

FILE *arc;

int x;
int main(int argc, char** argv){
	arc=fopen("C://Ingenieria_Software//Web_Development//C//prueba.txt", "r");
	while(!feof(arc)){
		fscanf(arc,"%d", &x);
		printf("\n%d",x);
	}
	
	fclose(arc);
	
	return 0;
	
}
