//libreria
#include <stdio.h>

//funcion principal 

int main (){
	
	int a;
	
	printf("Escriba el valor de la variable a: %i\n", a);
	scanf("%i", &a);
	
	if (a%2==0){
		
		printf("El numero es par\n");
	}
	else { 
	printf("El numero es impar.");
	}
	
}
