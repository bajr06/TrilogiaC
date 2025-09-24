#include <stdio.h>
#include <stdlib.h>


int opcion();

int * pedir_numeros();

int sumar(int numero1, int numero2);

int restar(int numero1, int numero2);

int multiplicar(int numero1, int numero2);

int dividir(int numero1, int numero2);


int main() {
	puts("¡Bienvenido a la Calculador en C \"Pantheon\"!");

	int seleccion = opcion();
	int * numeros = pedir_numeros();

	do {
		switch(seleccion) {
			case 1:
				sumar(numeros[0], numeros[1]);
				break;
			case 2:
				restar(numeros[0], numeros[1]);
				break;
			case 3:
				multiplicar(numeros[0], numeros[1]);
				break;
			case 4:
				dividir(numeros[0], numeros[1]);
				break;
			default:
				printf("Opción no existente, intentelo de nuevo.");
		}
	} while(seleccion >= 1 && seleccion <= 5);

	return EXIT_SUCCESS;
}

int opcion() {
	int opcion;

	puts("¿Cuál de las siguientes opciones quieres escoger a hacer?");
	puts("1. Sumar");
	puts("2. Restar");
	puts("3. Multiplicar");
	puts("4. Dividir");

	scanf("%d", &opcion);

	return opcion;
}

int * pedir_numeros() {
	int numeros[2];

	printf("Introduce el primer número: ");
	scanf("%d", &numeros[0]);

	printf("Introduce el segundo número: ");
	scanf("%d", &numeros[1]);

	return &numeros[0];
}

int sumar(int numero1, int numero2) {
	return numero1 + numero2;
}

int restar(int numero1, int numero2) {
	return numero1 - numero2;
}

int multiplicar(int numero1, int numero2) {
	return numero1 * numero2;
}

int dividir(int numero1, int numero2) {
	return numero1 / numero2;
}
