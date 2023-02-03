#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um programa que efectue a leitura de três valores inteiros
	e os escreva no monitor por ordem crescente.
*/

void ex14() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int a, b, c, maior, menor, meio;

	printf("Introduza 3 números inteiros: ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b) {
		if (a > c) {
			maior = a;
			if (b > c) {
				meio = b;
				menor = c;
			}
			else {
				meio = c;
				menor = b;
			}
		}
		else {
			maior = c;
			meio = a;
			menor = b;
		}
	}
	else {
		if (b > c) {
			maior = b;
			if (a > c) {
				meio = a;
				menor = c;
			}
			else {
				meio = c;
				menor = a;
			}
		}
		else {
			maior = c;
			meio = b;
			menor = a;
		}
	}

	printf("Número por ordem crescente: %d %d %d\n", menor, meio, maior);
}
