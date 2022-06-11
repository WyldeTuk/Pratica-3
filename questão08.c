// Faça um programa em C que calcule o fatorial de um número inteiro.
#include <stdio.h>

int main() {
  int v, f, m; //m é para imprimir o caminho até a resolução

  printf("insira um numero inteiro: ");
  scanf("%d", &v);
  m = v;
  for (f = 1; v > 1; v--)
    printf(" %d *", v);
  printf(" 1 =");
  for (f = 1; m > 1; m--)
    f = f * m;
  printf(" %d", f);

  return 0;
}
