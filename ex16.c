#include <stdio.h>
#include <locale.h>

/*
	Pretende-se um programa que efectue o seguinte: no início deve apresentar um menu
	de disciplinas com o seguinte formato:
		Disciplinas:
			Português (P)
			Inglês (I)
			Matemática (M)
	O utilizador deve seleccionar uma disciplina, utilizando para isso o caracter indicado
	no menu. Após a selecção, o utilizador deve especificar a nota obtida nessa disciplina
	(na escala 0-20). Para terminar o programa escreve no monitor a disciplina escolhida e
	informa se o aluno passou (i.e., a nota é superior ou igual a 10 valores) ou reprovou.
	Exemplo: Se o utilizador escolheu o caracter P e introduziu a nota 12 o programa
	deve escrever:
	• Na disciplina de Portugues o aluno passou com 12 valores.
	• Caso o utilizador introduza um caracter inválido (ou seja diferente de P, I ou M)
	ou indique uma nota fora dos limites especificados [0, 20] o programa deve
	terminar imediatamente.
*/

void main() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char disciplina;
	int nota;

	puts("Disciplinas:");
	puts("\tPortuguês (P)");
	puts("\tInglês (I)");
	puts("\tMatemática (M)");
	printf("\nEscolha a disciplina: ");
	disciplina = getchar();

	printf("Introduza a nota da disciplina: ");
	scanf_s("%d", &nota);

	if (nota < 0 || nota > 20)
		puts("\nERRO: Nota inválida!");
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
				printf("Na disciplina de Inglês o aluno passou com %d valores\n", nota);
			else
				puts("Na disciplina de Inglês o aluno reprovou!!");
			break;

		case 'M':
		case 'm':
			if (nota >= 10)
				printf("Na disciplina de Matemática o aluno passou com %d valores\n", nota);
			else
				puts("Na disciplina de Matemática o aluno reprovou!!");
			break;

		default:
			puts("\nERRO: Disciplina inválida!");
		}
	}
}