// Faça um programa em C que leia um número decimal e o converta em binário
// (ex.: 9 => 1001).
#include <stdio.h>

int main() {

  int decimal, resto, binario;

  printf("insira o valor a ser convertido: ");
  scanf("%d", &decimal);

  while (decimal > 0) {

    resto = decimal / 2;

    if (decimal % 2 == 0) {

      printf("0");
    } else {
      printf("1");
    }

    decimal = resto;
  }
  printf(" - (lido da direita pra esquerda)");
  return 0;
}
