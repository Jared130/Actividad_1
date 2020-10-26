//libreria 
#include <stdio.h>

//division de dos variables 


int main (){
	
	float a;
	float b; 
	
	printf("Escriba el valor de su numerador: %f\n", a); 
	scanf("%f", &a);
	
	printf("Escriba el valor de su divisor: %f\n", b); 
	scanf("%f",&b);
	
	float c;
	c = a / b ;
	
	printf("El resultado de tu division es: %.2f", c);
	
	return 0; 
	
}
