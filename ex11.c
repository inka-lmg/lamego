#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um programa que leia tr�s valores inteiros e determine se estes podem 
	corresponder aos lados de um tri�ngulo. Al�m disso, se os valores corresponderem
	aos lados de um tri�ngulo, este deve ser classificado como equil�tero, is�sceles ou escaleno.
		Nota: Um tri�ngulo � equil�tero se tiver os lados todos iguais, is�sceles se dois lados
		forem iguais, e escaleno se todos os lados tiverem comprimentos diferentes.
*/

void ex11() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int a, b, c;

	printf("Indique os lados do tri�ngulo: ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a <= 0 || b <= 0 || c <= 0)
		puts("ERRO: Medidas inv�lidas para o tri�ngulo.");
	else
		if (a == b && b == c)
			puts("O triangulo � equil�tero");
		else
			if(a == b || b == c || a == c)
				puts("O triangulo � is�sceles");
			else
				puts("O triangulo � escaleno");
}