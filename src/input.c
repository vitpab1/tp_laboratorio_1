/*
 * input.c
 *
 *  Created on: Apr 16, 2022
 *      Author: Pablo
 */
#include <stdio.h>
#include <stdlib.h>

int suma(int a, int b) {
	int total;
	total = a + b;
	return total;
}

float calculoDebito(float precio) {
	float total;

	total = precio * 0.9;
	return total;
}
float calculoCredito(float precio) {
	float total;

	total = precio * 1.25;
	return total;
}

float calculoBitcoin(float precio) {
	float total;

	total = precio / 4606954.55;
	return total;
}

float calculoUnitario(float precio, float km) {
	float total;

	total = precio / km;
	return total;
}

float diferenciaPrecio(float precioLatam, float precioAero) {

	float total;
	float diferencia;

	diferencia = precioLatam - precioAero;

	total = abs(diferencia);

	return total;
}

float valorMostrar(char *mensaje, float valor) {

	printf("%s %f \n", mensaje, valor);
	return 0;
}

int utn_getNumero(int *pResultado, char *mensaje, char *mensajeError,
		int minimo, int maximo, int reintentos) {

	int retorno = -1;
	int bufferInt;
	if (pResultado != NULL && mensaje != NULL && mensajeError != NULL
			&& minimo <= maximo && reintentos >= 0) {
		do {
			printf("%s", mensaje);
			scanf("%d", &bufferInt);
			if (bufferInt >= minimo && bufferInt <= maximo) {

				*pResultado = bufferInt;
				retorno = 0;
				break;
			} else {

				printf("%s", mensajeError);
				reintentos--;
			}
		} while (reintentos >= 0);

	}

	return retorno;

}

int utn_getNumeroFloat(float *pResultado, char *mensaje, char *mensajeError,
		float minimo, float maximo, int reintentos) {

	int retorno = -1;
	int bufferFloat;
	if (pResultado != NULL && mensaje != NULL && mensajeError != NULL
			&& minimo <= maximo && reintentos >= 0) {
		do {
			printf("%s", mensaje);
			scanf("%d", &bufferFloat);
			if (bufferFloat >= minimo && bufferFloat <= maximo) {

				*pResultado = bufferFloat;
				retorno = 0;
				break;
			} else {

				printf("%s", mensajeError);
				reintentos--;
			}
		} while (reintentos >= 0);

	}

	return retorno;

}
