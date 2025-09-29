#include <stdio.h>
#include <stdlib.h>


int opcion();

void pedir_numeros(int * numeros);

int sumar(int numero1, int numero2);

int restar(int numero1, int numero2);

int multiplicar(int numero1, int numero2);

int dividir(int numero1, int numero2);


int main() {
	puts("¡Bienvenido a la Calculador en C \"Pantheon\"!");

	int seleccion = opcion();
	int numeros [2];
	int resultado;

	pedir_numeros(&numeros[0]);

	switch(seleccion) {
		case 1:
			resultado = sumar(numeros[0], numeros[1]);
			break;
		case 2:
			resultado = restar(numeros[0], numeros[1]);
			break;
		case 3:
			resultado = multiplicar(numeros[0], numeros[1]);
			break;
		case 4:
			resultado = dividir(numeros[0], numeros[1]);
			break;
		default:
			printf("Opción no existente, intentelo de nuevo.");
	}
	
	printf("El resultado de la operación que has escojido es %d\n", resultado);

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

void pedir_numeros(int * numeros) {
	printf("Introduce el primer número: ");
	scanf("%d", &numeros[0]);

	printf("Introduce el segundo número: ");
	scanf("%d", &numeros[1]);
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
