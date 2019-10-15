#include <iostream>
#include<math.h>

long double fx(long double x);
long double a, b, m, error;
int main (){
	error = 1e-8;
	printf("Digite un valor a:");scanf("%Lf", &a);
	printf("Digite un valor b:");scanf("%Lf", &b);
	m=a; 	while (fabs(fx(m))>=error){
		m=(a+b)/2;
		printf("\n%Lf \t%Lf \t%Lf \t%Lf \t%Lf \t%Lf",a,fx(a),b,fx(b),m,fx(m));
		if (fx(a)*fx(m)>=0)
			a=m;
		else
			b=m;
	}
	printf("\n El valor de la raiz es:  %30.25Lf", m);
	return 0;
}
long double fx(long double x){
	long double y;
	y=1*pow(x,6)+1*pow(x,5)-4*pow(x,4)-6*pow(x,3)+6*pow(x,2)-3*x-5;	
	return y;
}
