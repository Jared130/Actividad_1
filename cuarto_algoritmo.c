//libreria
#include <stdio.h>
#include <math.h>
//resolucion de un polinomio 

int main (){
	
	float a;
	float b;
	float c;
	
	printf("elija el valor de su variable a:%f\n");
	scanf("%f",&a);
	
	printf("elija el valor de su variable b:%f\n");
	scanf("%f",&b);
	
	printf("escriba el valor de su variable c: %f\n");
	scanf("%f",&c);
	
	float b2 ;
	
	b2 = b * b;
	
	float l;
	l = 4*a*c;
	
	float resta;
	resta = b2 - l;
	
	float s;
	s= -b + sqrt(resta) ;
	
	float p;
	p = 2*a;
	
	float r1;
	r1 = s/p;
	
	printf("El valor de la raiz positiva es: %f\n", r1);
	
	float s2;
	s2 = -b - sqrt(resta);
	
	float r2;
	r2 = s2 / p ;
	
	printf("El valor de la raiz negativa es: %f", r2);
	
	
	
}
