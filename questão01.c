/*FaCa um programa em C que determine se um numero inteiro lido eh par ou
 * ímpar.*/

#include <stdio.h>

int main() {
  int x;

  printf("insira o número desejado: ");
  scanf("%d", &x);

  if (x % 2 == 0) {
    printf("o número %d é par\n", x);
  } else {
    printf("o número %d é ímpar\n", x);
  }

  return 0;
}
