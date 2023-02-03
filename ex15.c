#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um programa que, dada a data actual no formato dd/mm/aaaa determine a
	data do dia seguinte. A leitura da data deve ser efectuada só com uma instrução
	scanf(). Codifique duas versões do problema: uma utilizando a construção if–else e
	outra a instrução switch. Assuma que não existem anos bissextos.
*/

void ex15() {
	setlocale(LC_ALL, "Portuguese_Portugal");


	int dia, mes, ano;

	printf("Introduza uma data (dd/mm/aaaa): ");
	scanf_s("%d/%d/%d", &dia, &mes, &ano);

	switch (mes) {
	case 2:
		if (dia == 28)
			printf("Dia seguinte: 01/03/%d\n", ano);
		else
			printf("Dia seguinte: %02d/%02d/%d\n", dia + 1, mes, ano);
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		if (dia == 30)
			printf("Dia seguinte: 01/%02d/%d\n", mes + 1, ano);
		else
			printf("Dia seguinte: %02d/%02d/%d\n", dia + 1, mes, ano);
		break;

	default:
		if (dia == 31 && mes == 12)
			printf("Dia seguinte: 01/01/%d\n", ano + 1);
		else
			if (dia == 31)
				printf("Dia seguinte: 01/%02d/%d\n", mes + 1, ano);
			else
				printf("Dia seguinte: %02d/%02d/%d\n", dia + 1, mes, ano);
		break;
	}
}