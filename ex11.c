#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um programa que leia três valores inteiros e determine se estes podem 
	corresponder aos lados de um triângulo. Além disso, se os valores corresponderem
	aos lados de um triângulo, este deve ser classificado como equilátero, isósceles ou escaleno.
		Nota: Um triângulo é equilátero se tiver os lados todos iguais, isósceles se dois lados
		forem iguais, e escaleno se todos os lados tiverem comprimentos diferentes.
*/

void ex11() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int a, b, c;

	printf("Indique os lados do triângulo: ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a <= 0 || b <= 0 || c <= 0)
		puts("ERRO: Medidas inválidas para o triângulo.");
	else
		if (a == b && b == c)
			puts("O triangulo é equilátero");
		else
			if(a == b || b == c || a == c)
				puts("O triangulo é isósceles");
			else
				puts("O triangulo é escaleno");
}