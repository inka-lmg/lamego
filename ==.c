#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese_Portugal");

    int numero;
    printf("Escolha um numero inteiro: ");
    scanf_s("%d", &numero);
    if (numero == 0)
        printf("O numero é realmete zero.\n");
  
      else
        printf("O número não é zero.\n");
}
