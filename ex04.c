#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que peça o número da semana ao utilizador e mostre esse dia por extenso.
	Proteja o programa para introduções inválidas.
		Exemplo:
			Qual o dia da semana? 7
			Dia escolhido: Sábado

			Qual o dia da semana? 1
			Dia escolhido: Domingo

			Qual o dia da semana? 4
			Dia escolhido: Quarta-feira

			Qual o dia da semana? 9
			Dia inválido!
*/

void ex04() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int dia;

	printf("Qual o dia da semana? ");
	scanf_s("%d", &dia);

	switch (dia)
	{
	case 1:
		puts("Domingo");
		break;

	case 2:
		puts("Segunda-feira");
		break;

	case 3:
		puts("Terça-feira");
		break;

	case 4:
		puts("Quarta-feira");
		break;

	case 5:
		puts("Quinta-feira");
		break;

	case 6:
		puts("Sexta-feira");
		break;

	case 7:
		puts("Sábado");
		break;

	default:
		puts("Dia inválido!");
	}
}