#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que informe o valor de um serviço de taxis.
	Para calcular o valor do serviço é necessário saber a distância percorrida em KMs
	e qual a área do serviço, 1 ou 2.
	Caso a área seja 1, o preço do Km percorrido é de 0,80€, se a área for 2 o valor é de 1,30€.
	O programa deve solicitar a distância percorrida em KMs
	e qual a área do serviço e informar o valor do serviço.

	Exemplo de output:
		Indique a área (1 ou 2): 2
		Indique os KMs percorridos: 34
		O valor do serviço é: 44,20 euros
*/

void ex03() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float distancia, final;
	int area;

	printf("Indique a área (1 ou 2): ");
	scanf_s("%d", &area);

	if (area == 1 || area == 2)
	{
		printf("Indique os KMs percorridos: ");
		scanf_s("%f", &distancia);

		if (distancia <= 0)
			puts("ERRO: distância inválida!");
		else {
			if (area == 1)
				final = distancia * 0.8F;
			else
				final = distancia * 1.3F;

			printf("O valor do serviço é: %.2f euros\n", final);
		}
	}
	else
		puts("ERRO: área inválida!");
}