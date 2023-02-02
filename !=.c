#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese_Portugal");

    int numero;
    printf("Introduza um numero: ");
    scanf_s("%d", &numero);
    if (numero != 0)
        printf("O numero não é zero.\n");
   
    else
        printf("O numero é realmente zero.\n");
 }
   