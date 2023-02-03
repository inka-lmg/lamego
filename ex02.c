#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um programa para calcular e para comparar a área de dois retângulos A e B.
	O programa deverá informar qual o retângulo que possui a maior área ou se possuem tamanhos iguais.
		Dados de entrada:
			tamanho da base e da altura (tipo das variáveis: inteiro, valor em centímetros).
*/

void ex02() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float base, altura, areaA, areaB;

	printf("Introduza a base do 1º retângulo em cm: ");
	scanf_s("%f", &base);
	printf("Introduza a altura do 1º retângulo em cm: ");
	scanf_s("%f", &altura);
	areaA = base * altura;

	printf("Introduza a base do 2º retângulo em cm: ");
	scanf_s("%f", &base);
	printf("Introduza a altura do 2º retângulo em cm: ");
	scanf_s("%f", &altura);
	areaB = base * altura;

	printf("\nA área do 1º retângulo: %.2f cm\n", areaA);
	printf("A área do 2º retângulo: %.2f cm\n", areaB);

	if (areaA > areaB)
		puts("\nA área do 1º retângulo é a maior.");
	else
		if (areaA < areaB)
			puts("\nA área do 2º retângulo é a maior.");
		else
			puts("\nA área dos retângulos é igual.");

}