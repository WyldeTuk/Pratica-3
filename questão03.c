/*Faça um programa em C que imprima um qualitativo associado a uma nota lida
conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 =
Ótimo, e imprima Nota inválida nos demais casos.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int x;

  printf("\tsendo:\n 1 = Ruim\n 2 = Insuficiente\n 3 = Suficiente\n 4 = Bom\n "
         "5 = Ótimo\n insira uma nota qualitativa: ");
  scanf("%d", &x);

  while (x > 5 || x < 1) {
    system("clear");
    printf("\tsendo:\n 1 = Ruim\n 2 = Insuficiente\n 3 = Suficiente\n 4 = "
           "Bom\n 5 = Ótimo\n Sua reposta não corresponde\n Por favor digite "
           "um valor valido: ");
    scanf("%d", &x);
  }

  switch (x) {
  case 1:
    printf("A viagem foi ruim\n");
    break;

  case 2:
    printf("A viagem foi insuficiente\n");
    break;

  case 3:
    printf("A viagem foi suficiente\n");
    break;

  case 4:
    printf("A viagem foi boa\n");
    break;

  case 5:
    printf("✨A viagem foi ótima✨\n");
    break;
  }

  return 0;
}
