//libreria 
#include <stdio.h>

//micro 
#define PI 3.1416


// datos de un circulo 

int main (){
	
	// radio del circulo
	
	float r;
	printf("Digite el radio de su circulo:");
	scanf("%f",&r);
	
	printf("El radio del circulo es:%.2f\n", r);
	
	//area del circulo
	
	float r2;
	r2 = r*r;
	
	float A;
	A = PI * r2;
	
	printf("El area del circulo es: %.2f\n", A);
	
	//perimetro del circulo 
	
	float P;
	P = r*PI*2;
	
	printf("El perimetro del circulo es: %.2f", P);
	
	
	
	
}
