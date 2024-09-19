/*Dado um valor n inteiro positivo lido do teclado, exibir n linhas em que cada linha contém tantos
asteriscos (*) quanto for o número da linha.
○ Por exemplo, lendo o número 3, a linha 1 deve exibir “*”, a linha 2 deve exibir “**” e a linha 3
deve exibir “***”.*/

#include <stdio.h>

int main(void){

  int n, linha, coluna;

  printf("Digite um valor inteiro positivo: ");
  scanf("%d", &n);
  

  for(linha = 1; linha <= n; linha++){
    for(coluna = 1; coluna <= linha; coluna++){
      printf("*");
  } printf("\n");
  }
  return 0;
}