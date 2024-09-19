/*Escreva um programa que verifica se uma string é um
  palíndromo, ou seja, é a mesma quando lida de trás para frente ou de frente
  para trás

#include <stdio.h>
#include <string.h>

int main(void) {

  char string[200];
  char reverse[200];
  int tamanho = 0, i, cont = 0;

  printf("Insira a palavra: ");
  scanf("%s", string);

  strcpy(reverse, string);
  tamanho = strlen(string);
  
  for(i = 0; i < tamanho; i++){
    if(string[i] != reverse[tamanho-i-1]){
      printf("\nFalse");
      return 0;
    }
  }
  if(cont == 0){
    printf("\nTrue");
  }
  
  return 0;
}

versao simplificada a seguir:
*/

#include <stdio.h>
#include <string.h>

int main(void) {

  char string[200];

  printf("Insira a palavra: ");
  scanf("%s", string);

  int tamanho = strlen(string);

  for(int i = 0; i < tamanho; i++){
    if(string[i] != string[tamanho-i-1]){
      printf("\nFalse");
      return 0;
    }
  }
  printf("\nTrue");
  
  return 0;
}