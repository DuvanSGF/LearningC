/* Sacar la hipotenusa de un triangulo rectangulo, pidiendo al usuario 
 el valor de los dos catetos */
 
 #include<stdio.h>
 #include<math.h>
 
 int main(){
 	
 	float hipotenusa,cateto1,cateto2;
 	
 	printf("Digite los dos catetos: ");
 	scanf("%f %f", &cateto1, &cateto2);
 	
 	
 	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
 	printf("La hipotenusa del trinagulo es: %.2f",hipotenusa);
 	
 	return 0;
 }


