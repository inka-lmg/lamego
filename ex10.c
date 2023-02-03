#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um programa que peça a hora actual ao utilizador no formato 0-24 horas e
	escreva no monitor a hora no formato AM - PM.
		Exemplo de utilização:
			Indique a hora actual: 17:45
			São 5:45 PM.
*/


void ex10() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int horas, minutos;

	printf("Indique a hora actual: ");
	scanf_s("%d:%d", &horas, &minutos);

	if (minutos < 0 || minutos > 59 || horas < 0 || horas > 23)
		puts("Hora inválida");
	else
		if (horas > 12)
			printf("São %d:%d PM.", horas - 12, minutos);
		else
			printf("São %d:%d AM.", horas, minutos);
}