/*Faça um programa em C que calcule o valor do desconto sobre um valor bruto com
 * base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima
 * de 500.00 aplica 10%.*/
#include <stdio.h>

int main() {
  float vb, d;

  printf("insira o valor bruto: ");
  scanf("%f", &vb);

  if (vb <= 100.00) {
    d = vb * 0.01;
    printf("o valor do desconto é %.2f", d);
  } else if (vb > 100.00 && vb <= 500.00) {
    d = vb * 0.05;
    printf("o valor do desconto é %.2f", d);
  } else if (vb > 500.00) {
    d = vb * 0.10;
    printf("o valor do desconto é %.2f", d);
  }

  return 0;
}
