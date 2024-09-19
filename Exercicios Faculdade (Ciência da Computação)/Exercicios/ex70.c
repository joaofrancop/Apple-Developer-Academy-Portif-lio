/*Escreva um algoritmo para solicitar o valor de N (inteiro) e gerar H(real) conforme a fórmula a seguir:

H = 1+(1/2)+(1/3)+(1/4)+...+(1/N)
*/

#include <stdio.h>

int main(void){

  int n, i = 1;
  float h;

  printf("Insira o valor de N: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    h = h + (1.0/i);
    printf("1/%d\n", i);
  }
  printf("H = %.2f", h);
  return 0;
}
