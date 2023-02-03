#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um programa para calcular e para comparar a �rea de dois ret�ngulos A e B.
	O programa dever� informar qual o ret�ngulo que possui a maior �rea ou se possuem tamanhos iguais.
		Dados de entrada:
			tamanho da base e da altura (tipo das vari�veis: inteiro, valor em cent�metros).
*/

void ex02() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float base, altura, areaA, areaB;

	printf("Introduza a base do 1� ret�ngulo em cm: ");
	scanf_s("%f", &base);
	printf("Introduza a altura do 1� ret�ngulo em cm: ");
	scanf_s("%f", &altura);
	areaA = base * altura;

	printf("Introduza a base do 2� ret�ngulo em cm: ");
	scanf_s("%f", &base);
	printf("Introduza a altura do 2� ret�ngulo em cm: ");
	scanf_s("%f", &altura);
	areaB = base * altura;

	printf("\nA �rea do 1� ret�ngulo: %.2f cm\n", areaA);
	printf("A �rea do 2� ret�ngulo: %.2f cm\n", areaB);

	if (areaA > areaB)
		puts("\nA �rea do 1� ret�ngulo � a maior.");
	else
		if (areaA < areaB)
			puts("\nA �rea do 2� ret�ngulo � a maior.");
		else
			puts("\nA �rea dos ret�ngulos � igual.");

}