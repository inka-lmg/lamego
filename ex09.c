#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um programa que, ap�s ler as coordenadas de um ponto do plano
	na forma de par ordenado (x, y), determine a que quadrante pertence.
*/

void ex09() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float x, y;

	printf("Introduza as coordenadas (x; y): ");
	scanf_s("%f;%f", &x, &y);

	if (x == 0 && y == 0)
		puts("Os pontos est�o na origem!");
	else
		if (x >= 0 && y >= 0)
			puts("Os pontos est�o no 1� quadrante!");
		else
			if (x < 0 && y >= 0)
				puts("Os pontos est�o no 2� quadrante!");
			else
				if (x < 0 && y < 0)
					puts("Os pontos est�o no 3� quadrante!");
				else
					puts("Os pontos est�o no 4� quadrante!");
}