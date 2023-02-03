#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um programa que efectue a leitura de 3 valores inteiros e escreva o maior no monitor.
*/

void ex13() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int a, b, c, maior;

	printf("Introduza 3 números inteiros: ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b) {
		if (a > c)
			maior = a;
		else
			maior = c;
	}
	else
		if (b > c)
			maior = b;
		else
			maior = c;

	printf("Maior: %d\n", maior);
}