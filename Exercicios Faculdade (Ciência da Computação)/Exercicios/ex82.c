/*Escreva um programa que contenha um vetor de 8 valores lidos do teclado. Você deve garantir que
os valores lidos sejam inteiros positivos. Em seguida, o programa deverá solicitar um número do
teclado e verificar se esse número está contido ou não no vetor.
*/

#include <stdio.h>

int main(){

int vet[8];
int verify;
int find = 0;

for(int i = 0; i < 8; i++){
  printf("Insira os valores do vetor: ");
  scanf("%d", &vet[i]);
  if(vet[i] < 0){
    printf("Valor inválido, insira um inteiro positivo: ");
    i--;
  }
} 

  printf("Insira um numero para verificação: ");
  scanf("%d", &verify);

for(int i = 0; i < 8; i++){
  if(verify == vet[i]){
   find = 1;
    break;
  }
}

if(find){
  printf("True");
}  else {
  printf("False");
}

return 0;
}