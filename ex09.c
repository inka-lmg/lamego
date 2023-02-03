#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um programa que, após ler as coordenadas de um ponto do plano
	na forma de par ordenado (x, y), determine a que quadrante pertence.
*/

void ex09() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float x, y;

	printf("Introduza as coordenadas (x; y): ");
	scanf_s("%f;%f", &x, &y);

	if (x == 0 && y == 0)
		puts("Os pontos estão na origem!");
	else
		if (x >= 0 && y >= 0)
			puts("Os pontos estão no 1º quadrante!");
		else
			if (x < 0 && y >= 0)
				puts("Os pontos estão no 2º quadrante!");
			else
				if (x < 0 && y < 0)
					puts("Os pontos estão no 3º quadrante!");
				else
					puts("Os pontos estão no 4º quadrante!");
}