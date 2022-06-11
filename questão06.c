/*Faça um programa em C que liste todos os múltiplos de 3, entre 1 e 100.*/
#include <stdio.h>

int main() {
  int v;

  for (v = 1; v < 101; v++)
    if (v % 3 == 0) {
      printf("%d\t", v);
    }

  return 0;
}
