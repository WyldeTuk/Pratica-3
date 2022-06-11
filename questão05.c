// Faça um programa em C que leia um ano e verifique se ele é bissexto //
#include <stdio.h>

int main() {
  int ano;

  printf("insira o ano: ");
  scanf("%d", &ano);

  if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
    printf("O ano %d eh um ano bissexto", ano);

  } else {
    printf("O ano %d nao eh um ano bissexto", ano);
  }
  return 0;
}
