#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um programa que peça ao utilizador o tipo e a idade do veículo e
	imprima o imposto a pagar de acordo com a seguinte tabela:
			Mais de 5 anos		Até 5 anos, inclusivé
		1		5000				9000
		2		10000				25000
		3		15000				30000
		4		30000				50000
*/

void ex12() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int tipo, idade, imposto;

	printf("Introduza o tipo do veículo (1-4): ");
	scanf_s("%d", &tipo);

	if (tipo < 1 || tipo > 4)
		puts("ERRO: tipo inválido!");
	else
	{
		printf("Introduza a idade do veículo: ");
		scanf_s("%d", &idade);
		if (idade <= 5)
			switch (tipo)
			{
			case 1:
				imposto = 9000;
				break;
			case 2:
				imposto = 25000;
				break;
			case 3:
				imposto = 30000;
				break;
			case 4:
				imposto = 50000;
				break;
			}
		else
		{
			switch (tipo)
			{
			case 1:
				imposto = 5000;
				break;
			case 2:
				imposto = 10000;
				break;
			case 3:
				imposto = 15000;
				break;
			case 4:
				imposto = 30000;
				break;
			}
		}

		printf("Imposto a pagar: %d\n", imposto);
	}
}