/*
 * input.h
 *
 *  Created on: Apr 16, 2022
 *      Author: Pablo
 */

#ifndef INPUT_H_
#define INPUT_H_

int suma(int a, int b);

int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
int utn_getNumeroFloat(float* pResultado,char* mensaje,char* mensajeError,float minimo,float maximo,int reintentos);
float calculoTotales(int km, float latam, float aerolineas);



#endif /* INPUT_H_ */
