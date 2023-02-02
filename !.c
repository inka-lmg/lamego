#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "Portuguese_Portugal");
    int numero;
    printf("Inttroduza um numero: ");
    scanf_s("%d", &numero);
    if (!numero)
        printf("O numero é realmente zero.\n");

    else
        printf("O número não é zero.\n");
}
   