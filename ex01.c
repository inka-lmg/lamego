#include <stdio.h>
#include <locale.h>

/*
	Faça um programa que receba um número inteiro e
	que verifique se esse número é par ou ímpar.
*/

void ex01() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int num;

	printf("Introduza um número inteiro: ");
	scanf_s("%d", &num);

	if (num == 0)
		printf("Zero é NULO!\n");
	else
		if (num % 2 == 0)
			printf("O número %d é PAR\n", num);
		else
			printf("O número %d é IMPAR\n", num);

}