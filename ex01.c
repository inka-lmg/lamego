#include <stdio.h>
#include <locale.h>

/*
	Fa�a um programa que receba um n�mero inteiro e
	que verifique se esse n�mero � par ou �mpar.
*/

void ex01() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int num;

	printf("Introduza um n�mero inteiro: ");
	scanf_s("%d", &num);

	if (num == 0)
		printf("Zero � NULO!\n");
	else
		if (num % 2 == 0)
			printf("O n�mero %d � PAR\n", num);
		else
			printf("O n�mero %d � IMPAR\n", num);

}