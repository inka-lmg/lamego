#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um programa que peça um caracter alfabético ao utilizador e escreva a
	maiúscula correspondente no monitor. Se a letra introduzida já for maiúscula deve ser
	escrita inalterada. Se o caracter não pertencer ao alfabeto deve ser escrita a seguinte
	mensagem: “Atencao! O caracter X nao pertence ao alfabeto”, em que X é o caracter
	introduzido pelo utilizador.
*/

void ex08() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char ch;

	printf("Introduza um caracter: ");
	ch = getchar();

	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
		if (ch >= 'a' && ch <= 'z')
			printf("%c --> %c\n", ch, ch - ('a' - 'A'));
		else
			printf("%c\n", ch);
	}
	else
		printf("Atencao! O caracter '%c' não pertence ao alfabeto!\n", ch);
}