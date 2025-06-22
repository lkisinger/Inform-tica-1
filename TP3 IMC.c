#include <stdio.h>

int main(void) {
	float peso;
	float altura;
	float imc;
	
	do{
	printf ("Ingrese su peso en kilogramos: ");
	scanf ("%f", &peso);
	
	printf ("Ingrese su altura en metros: ");
	scanf ("%f", &altura);
	
	if ( peso < 0 || altura < 0 )
		printf ("ninguno de los numeros puede ser negativo\n");
	
	}while (  peso < 0 || altura < 0 );
	
	imc=peso/(altura*altura);
	
	printf (" Su indice de masa corporal es: %.2f\n",imc);
	
	printf (" INDICE\tCONDICION\n<15|\tDelgadez muy severa\n15-15.9|\tDelgadez severa\n16-18.4|\t Delgadez\n18.5-24.9|\tPeso saludable\n25-29.9|\tSobrepeso\n30-34.9|\tObesidad moderada\n35-39.9|\tObesidad severa\n>40|\tObesidad morbida");
	
	return 0;
}

