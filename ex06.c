#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
	Desenvolva um programa que calcule as raízes reais de uma equação do segundo
	grau utilizando a fórmula resolvente. Caso não existam raízes reais, o utilizador deve
	ser alertado. Para uma equação no formato ax2 + bx + c = 0, utilizar a fórmula resolvente.
	No início, o utilizador deve indicar os valores reais a, b, c.
*/

void ex06() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float a, b, c;
	double x1, x2, delta;

	puts("Introduza os coeficientes da equação:");
	scanf_s("%f %f %f", &a, &b, &c);

	if (a == 0)
		puts("\n'a' tem de ser diferente de 0!");
	else {
		delta = pow(b, 2) - 4. * a * c;

		if (delta >= 0) {
			x1 = (-b + sqrt(delta)) / (2. * a);
			x2 = (-b - sqrt(delta)) / (2. * a);

			printf("\nA equação introduzida foi:\n\t%.6g X^2 + %.6g X + %.6g\n", a, b, c);

			if (delta == 0)
				printf("\nApenas existe uma única raiz real:\n\tÚnica raiz = %.6g\n", x1);
			else
				printf("\nAs raízes reais são:\n\t1ª raiz = %.6g\n\t2ª raiz = %.6g\n", x1, x2);
		}
		else
			puts("\nATENÇÃO: Não existem raízes reais!");
	}
}