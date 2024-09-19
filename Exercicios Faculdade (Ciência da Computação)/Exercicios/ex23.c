/*Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".

Entrada
Quatro números inteiros A, B, C e D.

Saída
Mostre a respectiva mensagem após a validação dos valores.*/

#include <stdio.h>

int main(void) {

  int A, B, C, D;

  printf("Insira o valor de A: ");
  scanf("%d", &A);

  printf("Insira o valor de B: ");
  scanf("%d", &B);

  printf("Insira o valor de C: ");
  scanf("%d", &C);

  printf("Insira o valor de D: ");
  scanf("%d", &D);

  if (B > C && D > A&& (C + D) > (A + B) && C > 0 && D > 0 && A % 2 == 0) {

    printf("Valores aceitos");
  } else {

    printf("Valores nao aceitos");
  }
  return 0;
}