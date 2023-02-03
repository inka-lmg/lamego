#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que informe o valor de um servi�o de taxis.
	Para calcular o valor do servi�o � necess�rio saber a dist�ncia percorrida em KMs
	e qual a �rea do servi�o, 1 ou 2.
	Caso a �rea seja 1, o pre�o do Km percorrido � de 0,80�, se a �rea for 2 o valor � de 1,30�.
	O programa deve solicitar a dist�ncia percorrida em KMs
	e qual a �rea do servi�o e informar o valor do servi�o.

	Exemplo de output:
		Indique a �rea (1 ou 2): 2
		Indique os KMs percorridos: 34
		O valor do servi�o �: 44,20 euros
*/

void ex03() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float distancia, final;
	int area;

	printf("Indique a �rea (1 ou 2): ");
	scanf_s("%d", &area);

	if (area == 1 || area == 2)
	{
		printf("Indique os KMs percorridos: ");
		scanf_s("%f", &distancia);

		if (distancia <= 0)
			puts("ERRO: dist�ncia inv�lida!");
		else {
			if (area == 1)
				final = distancia * 0.8F;
			else
				final = distancia * 1.3F;

			printf("O valor do servi�o �: %.2f euros\n", final);
		}
	}
	else
		puts("ERRO: �rea inv�lida!");
}