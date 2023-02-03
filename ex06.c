#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
	Desenvolva um programa que calcule as ra�zes reais de uma equa��o do segundo
	grau utilizando a f�rmula resolvente. Caso n�o existam ra�zes reais, o utilizador deve
	ser alertado. Para uma equa��o no formato ax2 + bx + c = 0, utilizar a f�rmula resolvente.
	No in�cio, o utilizador deve indicar os valores reais a, b, c.
*/

void ex06() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float a, b, c;
	double x1, x2, delta;

	puts("Introduza os coeficientes da equa��o:");
	scanf_s("%f %f %f", &a, &b, &c);

	if (a == 0)
		puts("\n'a' tem de ser diferente de 0!");
	else {
		delta = pow(b, 2) - 4. * a * c;

		if (delta >= 0) {
			x1 = (-b + sqrt(delta)) / (2. * a);
			x2 = (-b - sqrt(delta)) / (2. * a);

			printf("\nA equa��o introduzida foi:\n\t%.6g X^2 + %.6g X + %.6g\n", a, b, c);

			if (delta == 0)
				printf("\nApenas existe uma �nica raiz real:\n\t�nica raiz = %.6g\n", x1);
			else
				printf("\nAs ra�zes reais s�o:\n\t1� raiz = %.6g\n\t2� raiz = %.6g\n", x1, x2);
		}
		else
			puts("\nATEN��O: N�o existem ra�zes reais!");
	}
}