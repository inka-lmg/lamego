#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um programa que pe�a um caracter ao utilizador e indique
	se o caracter � mai�sculo, min�sculo ou outro.
*/

void ex07() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char ch;

	printf("Introduza um caracter: ");
	ch = getchar();

	if (ch >= 'a' && ch <= 'z')
		printf("%c � um caracter min�sculo\n", ch);
	else
		if (ch >= 'A' && ch <= 'Z')
			printf("%c � um caracter mai�sculo\n", ch);
		else
			printf("%c � outro caracter\n", ch);
}