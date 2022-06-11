/*
Faça um programa em C que leia uma tecla pressionada
e determine se ela é uma letra, um dígito ou um caractere especial.
*/
#include <stdio.h>

int main() {

  char c = 0;

  printf("Aperte uma tecla em seu teclado: ");
  c = getc(stdin);

  if (c > 32 && c < 48 || c > 57 && c < 65 || c > 90 && c < 97 || c > 122) {
    printf("\n\nTecla pressionada: %c\n\n", c);
    printf("A tecla pressionada eh um caractere especial\n\n");
  } else if (c > 47 && c < 58) {
    printf("\n\nTecla pressionada: %c\n\n", c);
    printf("A tecla pressionada eh um numero\n\n");
  } else {
    printf("\n\nTecla pressionada: %c\n\n", c);
    printf("A tecla pressionada eh uma letra\n\n");
  }

  return 0;
}
