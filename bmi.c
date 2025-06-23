#include <stdio.h>

int main(void) {
	float peso;
	float altura;
	float imc;
	//ya habia hecho el programa con esa verificacion desde la primera vez
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
	
	printf (" INDICE\tCONDICION\n<15|\tDelgadez muy severa\n15-15.9|\tDelgadez severa\n16-18.4|\t Delgadez\n18.5-24.9|\tPeso saludable\n25-29.9|\tSobrepeso\n30-34.9|\tObesidad moderada\n35-39.9|\tObesidad severa\n>40|\tObesidad morbida\n");

	printf ("Su condicion es ");
	if (imc < 15)
		printf ("Delgadez muy severa\n");
	else
		if (imc >= 15 && imc <= 15.9)
			printf ("Delgadez severa\n");
		else
			if (imc >= 16 && imc <= 18.4)
				printf ("Delgadez\n");
			else
				if (imc >= 18.5 && imc <= 24.9)
					printf ("Peso saludable\n");
				else
					if (imc >= 25 && imc <= 29.9)
						printf ("Sobre peso\n");
					else
						if (imc >= 30 && imc <= 34.9)
							printf ("Obesidad moderada\n");
						else	
							if (imc >= 35 && imc <= 39.9)
								printf ("Obesidad severa\n");
							else
								if (imc >= 40)
									printf ("Obesidad morbida\n");
	return 0;
}

