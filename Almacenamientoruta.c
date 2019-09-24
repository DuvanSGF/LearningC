#include<stdio.h>

float duvan(int *d);
int main(int arg, char** argv){
	int y = 6;
	float z;
	z = duvan(&y);
	printf("%d", y);
	return 0;
	
}

float duvan(int *d){
	*d=10;
	
	return 0;
}
