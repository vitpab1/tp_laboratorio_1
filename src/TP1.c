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

int main(void) {
	setbuf(stdout, NULL);

	int num1;
	int num2;
	int suma;
	printf("ingrese un numero\n");
	scanf("%d", &num1);
	printf("ingrese un numero\n");
	scanf("%d", &num2);
	suma = num1 + num2;
	printf("suma es 123 %d", suma);

	return EXIT_SUCCESS;
}
