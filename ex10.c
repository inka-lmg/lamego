#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um programa que pe�a a hora actual ao utilizador no formato 0-24 horas e
	escreva no monitor a hora no formato AM - PM.
		Exemplo de utiliza��o:
			Indique a hora actual: 17:45
			S�o 5:45 PM.
*/


void ex10() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int horas, minutos;

	printf("Indique a hora actual: ");
	scanf_s("%d:%d", &horas, &minutos);

	if (minutos < 0 || minutos > 59 || horas < 0 || horas > 23)
		puts("Hora inv�lida");
	else
		if (horas > 12)
			printf("S�o %d:%d PM.", horas - 12, minutos);
		else
			printf("S�o %d:%d AM.", horas, minutos);
}