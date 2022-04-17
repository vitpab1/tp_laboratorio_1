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

	float latamDebito;
	float latamCredito;
	float latamBitcoin;
	float latamUnitario;

	float aeroDebito;
	float aeroCredito;
	float aeroBitcoin;
	float aeroUnitario;

	float diferencia;

	do {
		respuesta =
				utn_getNumero(&opcion,
						"Selecciones una opcion \n\n1-Ingresar Kilómetros: \n2-Ingresar Precio de Vuelos: \n3-Calcular todos los costos: \n4-Informar Resultados: \n5-Carga forzada de datos:  \n6-Salir: \n",
						"No es una opcion valida", 1, 6, 2);
		if (!respuesta) {
			switch (opcion) {
			case 1:
				kmIngresados = utn_getNumeroFloat(&kmIngresados, "Ingresar kms",
						"Error. Tiene que ser un numero entre 50 y 20000", 50,
						20000, 99999);
				break;
			case 2:
				if (kmIngresados != 0) {
					precioAerolineas = utn_getNumeroFloat(&precioAerolineas,
							"Ingresar Precio Aerolineas",
							"Error. Tiene que ser un numero entre $1 y $500000",
							1, 500000, 99999);
					precioLatam = utn_getNumeroFloat(&precioLatam,
							"Ingresar Precio Latam",
							"Error. Tiene que ser un numero entre $1 y $500000",
							1, 500000, 99999);
				} else {

					printf("Error. Ingrese los kms para continuar");
				}

				break;
			case 3:
				if (kmIngresados > 0 && precioAerolineas > 0
						&& precioLatam > 0) {
					latamDebito = calculoDebito(precioLatam);
					latamCredito = calculoCredito(precioLatam);
					latamBitcoin = calculoBitcoin(precioLatam);
					latamUnitario = calculoUnitario(precioLatam, kmIngresados);
					aeroDebito = calculoDebito(precioAerolineas);
					aeroCredito = calculoCredito(precioAerolineas);
					aeroBitcoin = calculoBitcoin(precioAerolineas);
					aeroUnitario = calculoUnitario(precioAerolineas,
							kmIngresados);
					diferencia = diferenciaPrecio(precioLatam,
							precioAerolineas);

					printf("Calculos realizados");
				} else {
					printf("Error. Ingrese los kms y precios para continuar");

				}

				break;
			case 4:

				valorMostrar("Kms Ingresados: ", kmIngresados);

				valorMostrar("Precio Latam: ", precioLatam);

				valorMostrar("a)Precio con tarjeta de débito: ", latamDebito);
				valorMostrar("b)Precio con tarjeta de credito: ", latamCredito);
				valorMostrar("c)Precio con Bitcoin de débito: ", latamBitcoin);
				valorMostrar("d)Precio Unitario: ", latamUnitario);
				printf("\n");
				valorMostrar("Precio Latam: ", precioAerolineas);
				valorMostrar("a)Precio con tarjeta de débito: ", aeroDebito);
				valorMostrar("b)Precio con tarjeta de credito: ", aeroCredito);
				valorMostrar("c)Precio con Bitcoin de débito: ", aeroBitcoin);
				valorMostrar("d)Precio Unitario: ", aeroUnitario);

				valorMostrar("La diferencia de precio es: ", diferencia);

				break;
			case 5:
				kmIngresados = 7090;
				precioAerolineas = 162965;
				precioLatam = 159339;
				latamDebito = calculoDebito(precioLatam);
				latamCredito = calculoCredito(precioLatam);
				latamBitcoin = calculoBitcoin(precioLatam);
				latamUnitario = calculoUnitario(precioLatam, kmIngresados);
				aeroDebito = calculoDebito(precioAerolineas);
				aeroCredito = calculoCredito(precioAerolineas);
				aeroBitcoin = calculoBitcoin(precioAerolineas);
				aeroUnitario = calculoUnitario(precioAerolineas, kmIngresados);
				diferencia = diferenciaPrecio(precioLatam, precioAerolineas);
				valorMostrar("Kms Ingresados: ", kmIngresados);
				printf("\n");
				valorMostrar("Precio Latam: ", precioLatam);
				valorMostrar("a)Precio con tarjeta de débito: ", latamDebito);
				valorMostrar("b)Precio con tarjeta de credito: ", latamCredito);
				valorMostrar("c)Precio con Bitcoin de débito: ", latamBitcoin);
				valorMostrar("d)Precio Unitario: ", latamUnitario);
				printf("\n");
				valorMostrar("Precio Latam: ", precioAerolineas);
				valorMostrar("a)Precio con tarjeta de débito: ", aeroDebito);
				valorMostrar("b)Precio con tarjeta de credito: ", aeroCredito);
				valorMostrar("c)Precio con Bitcoin de débito: ", aeroBitcoin);
				valorMostrar("d)Precio Unitario: ", aeroUnitario);
				printf("\n");

				valorMostrar("La diferencia de precio es: ", diferencia);
				break;
			case 6:
				break;

			}

		}
	} while (opcion != 6);

	return EXIT_SUCCESS;
}
