#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um programa que peça um caracter ao utilizador e indique
	se o caracter é maiúsculo, minúsculo ou outro.
*/

void ex07() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char ch;

	printf("Introduza um caracter: ");
	ch = getchar();

	if (ch >= 'a' && ch <= 'z')
		printf("%c é um caracter minúsculo\n", ch);
	else
		if (ch >= 'A' && ch <= 'Z')
			printf("%c é um caracter maiúsculo\n", ch);
		else
			printf("%c é outro caracter\n", ch);
}