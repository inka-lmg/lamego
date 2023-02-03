#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que peça o número do mês ao utilizador e mostre esse mês por extenso.
	Proteja o programa para introduções inválidas.
		Exemplo:
			Qual o mês? 1
			Mês escolhido: Janeiro
			
			Qual o mês? 7
			Mês escolhido: Julho
			
			Qual o mês? 13
			Mês inválido!
*/

void ex05() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int mes;

	printf("Qual o mês? ");
	scanf_s("%d", &mes);

	switch (mes)
	{
	case 1:
		puts("Janeiro");
		break;

	case 2:
		puts("Fevereiro");
		break;

	case 3:
		puts("Março");
		break;

	case 4:
		puts("Abril");
		break;

	case 5:
		puts("Maio");
		break;

	case 6:
		puts("Junho");
		break;

	case 7:
		puts("Julho");
		break;

	case 8:
		puts("Agosto");
		break;

	case 9:
		puts("Setembro");
		break;

	case 10:
		puts("Outubro");
		break;

	case 11:
		puts("Novembro");
		break;

	case 12:
		puts("Dezembro");
		break;

	default:
		puts("Mês inválido!");
	}
}