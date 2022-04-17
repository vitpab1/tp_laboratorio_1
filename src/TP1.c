/*
 ============================================================================
 Name        : TP1.c
 Author      : Pablo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "input.h"

int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	int respuesta;
	float kmIngresados;
	float precioAerolineas;
	float precioLatam;




	do {
		respuesta =
				utn_getNumero(&opcion,
						"Selecciones una opcion \n\n1-Ingresar Kilómetros: \n2-Ingresar Precio de Vuelos: \n3-Calcular todos los costos: \n4-Informar Resultados: \n5-Carga forzada de datos:  \n6-Salir: \n",
						"No es una opcion valida", 1, 3, 2);
		if (!respuesta) {
			switch (opcion) {
			case 1:
			kmIngresados =	utn_getNumeroFloat(&kmIngresados, "Ingresar kms", "Error. Tiene que ser un numero entre 50 y 20000", 50, 20000,99999);
				break;
			case 2:
				precioAerolineas =	utn_getNumeroFloat(&precioAerolineas, "Ingresar Precio Aerolineas", "Error. Tiene que ser un numero entre $1 y $500000", 1, 500000,99999);
				precioLatam =	utn_getNumeroFloat(&precioLatam, "Ingresar Precio Latam", "Error. Tiene que ser un numero entre $1 y $500000", 1, 500000,99999);

				break;
			case 3:
				printf("entre al caso 1\n");
				break;
			case 4:
				printf("entre al caso 2\n");
				break;
			case 5:
				printf("entre al caso 1\n");
				break;
			case 6:
				printf("entre al caso 2\n");
				break;

			}

		}
	} while (opcion != 6);

	return EXIT_SUCCESS;
}
