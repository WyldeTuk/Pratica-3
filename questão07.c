// Escrever um programa em C que liste os 10 primeiros números da série de
// Fibonacci.//
#include <stdio.h>

int main() {

  int n, i;
  long int v1, v2, v3;

  v1 = 0;
  v2 = 1;
  v3 = v1 + v2;

  printf("insira o numero de termos: ");
  scanf("%d", &n);

  for (i = 0; i <= n; i++) {
    printf("%ld, ", v3);
    v1 = v2;
    v2 = v3;
    v3 = v1 + v2;
  }
  return 0;
}
