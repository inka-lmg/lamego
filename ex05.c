#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que pe�a o n�mero do m�s ao utilizador e mostre esse m�s por extenso.
	Proteja o programa para introdu��es inv�lidas.
		Exemplo:
			Qual o m�s? 1
			M�s escolhido: Janeiro
			
			Qual o m�s? 7
			M�s escolhido: Julho
			
			Qual o m�s? 13
			M�s inv�lido!
*/

void ex05() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int mes;

	printf("Qual o m�s? ");
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
		puts("Mar�o");
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
		puts("M�s inv�lido!");
	}
}