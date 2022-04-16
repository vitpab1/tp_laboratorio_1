/*
 * input.h
 *
 *  Created on: Apr 16, 2022
 *      Author: Pablo
 */

#ifndef INPUT_H_
#define INPUT_H_

int suma(int a, int b);
///
int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
float utn_getNumeroFloat(float* pResultado,char* mensaje,char* mensajeError,float minimo,float maximo,int reintentos);

/// @param precio Toma el precio y lo multiplica por 0.9
/// @return
float calculoDebito(float precio);
/// @param precio  Toma el precio y lo multiplica por 1.25
/// @return
float calculoCredito(float precio);
/// @param precio  Toma el precio y lo divide por el precio del bitcoin
/// @return
float calculoBitcoin(float precio) ;
/// @param precio Toma el precio y lo divida por la cantidad de km
/// @param km
/// @return
float calculoUnitario(float precio, float km);
/// @param precioLatam
/// @param precioAero
/// @return muestra el valor absoluto de la resta del precio de latam y aerolineas
float diferenciaPrecio (float precioLatam, float precioAero);
/// @param mensaje
/// @param valor
/// @return
float valorMostrar (char *mensaje, float valor);

#endif /* INPUT_H_ */
