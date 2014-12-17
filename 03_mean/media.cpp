#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    int respuesta = 0;
    double suma = 0, nuevo_numero = 0;

    while (nuevo_numero >= 0) {
	printf("Dime otro número: ");
	scanf(" %lf", &nuevo_numero);

	if (nuevo_numero >= 0) {
	    suma += nuevo_numero;

	    respuesta++;
	}
    }

    printf("\nLa media es: %lf\n", suma / respuesta);

    return EXIT_SUCCESS;
}
