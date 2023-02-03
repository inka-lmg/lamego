#include <stdio.h>
#include <locale.h>

/*
	Pretende-se um programa que efectue o seguinte: no in�cio deve apresentar um menu
	de disciplinas com o seguinte formato:
		Disciplinas:
			Portugu�s (P)
			Ingl�s (I)
			Matem�tica (M)
	O utilizador deve seleccionar uma disciplina, utilizando para isso o caracter indicado
	no menu. Ap�s a selec��o, o utilizador deve especificar a nota obtida nessa disciplina
	(na escala 0-20). Para terminar o programa escreve no monitor a disciplina escolhida e
	informa se o aluno passou (i.e., a nota � superior ou igual a 10 valores) ou reprovou.
	Exemplo: Se o utilizador escolheu o caracter P e introduziu a nota 12 o programa
	deve escrever:
	� Na disciplina de Portugues o aluno passou com 12 valores.
	� Caso o utilizador introduza um caracter inv�lido (ou seja diferente de P, I ou M)
	ou indique uma nota fora dos limites especificados [0, 20] o programa deve
	terminar imediatamente.
*/

void main() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char disciplina;
	int nota;

	puts("Disciplinas:");
	puts("\tPortugu�s (P)");
	puts("\tIngl�s (I)");
	puts("\tMatem�tica (M)");
	printf("\nEscolha a disciplina: ");
	disciplina = getchar();

	printf("Introduza a nota da disciplina: ");
	scanf_s("%d", &nota);

	if (nota < 0 || nota > 20)
		puts("\nERRO: Nota inv�lida!");
	else {
		switch (disciplina)
		{
		case 'P':
		case 'p':
			if (nota >= 10)
				printf("Na disciplina de Portugues o aluno passou com %d valores\n", nota);
			else
				puts("Na disciplina de Portugues o aluno reprovou!!");
			break;

		case 'I':
		case 'i':
			if (nota >= 10)
				printf("Na disciplina de Ingl�s o aluno passou com %d valores\n", nota);
			else
				puts("Na disciplina de Ingl�s o aluno reprovou!!");
			break;

		case 'M':
		case 'm':
			if (nota >= 10)
				printf("Na disciplina de Matem�tica o aluno passou com %d valores\n", nota);
			else
				puts("Na disciplina de Matem�tica o aluno reprovou!!");
			break;

		default:
			puts("\nERRO: Disciplina inv�lida!");
		}
	}
}