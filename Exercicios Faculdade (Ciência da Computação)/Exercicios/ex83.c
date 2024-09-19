/*Seja um vetor de inteiros de nove elementos. Escreva um programa que realize a seguinte sequência
  de ações, na ordem indicada:
  a) preenchimento do vetor por leitura de valores positivos;
  b) impressão dos elementos do vetor em uma linha, usando dois espaços em branco para separar os valores de cada elemento;
  c) rotação dos elementos do vetor, com o deslocamento de todos os valores dos elementos para a posição seguinte, exceto o último valor, que deve ser colocado na posição do primeiro elemento;
  d) repetição do item b;
  e) soma do índice de cada elemento ao conteúdo da posição correspondente;
  f) repetição do item b;
  g) leitura de um valor inteiro e apresentação do número de ocorrências desse valor no vetor*/

#include <stdio.h>

int main(void) {

  int vet[9];
  int rotacao[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  int i;
  int soma = 0;
  int verify;
  int cont = 0;
  
  for(i = 0; i < 9; i++){
  printf("Insira os valores para o vetor [%d]: ", i);
  scanf("%d", &vet[i]);
  }  
  
  for(i = 0; i < 9; i++){
    printf("%d  ", vet[i]);
  }

  printf("\n");
  
  for(i = 0; (i < 9); i++){
  rotacao[i] = vet[i];
  }

  for(i = 0; (i < 9); i++){
  vet[i+1] = rotacao[i];
  vet[0] = rotacao[8];
  }

  for(i = 0; i < 9; i++){
    printf("%d  ", vet[i]);
  }
  printf("\n");
  
  for(i = 0; i < 9; i++){
    printf("%d  ", soma = vet[i] + i);
  }

  printf("\nVerificar numero inteiro: ");
  scanf("%d", &verify);

  for(i = 0; i < 9; i++){
    if(verify == vet[i]){
      cont++;
    }
  }

  if(cont > 0){
    printf("True");
  } else {
    printf("False");
  }
  
  return 0;
}