/*Escreva um programa que crie um vetor de números inteiros de 6 posições e povoe esse vetor com
valores lidos do teclado. O programa deverá aceitar somente números pares entre 1 e 20. Ao final,
imprima todos os valores salvos no vetor, além da média dos valores, o menor e o maior valor.
*/

#include <stdio.h> 

int main(void){

int vetor[6];
int soma = 0;
float media;
int maior = 0;
int menor = 21;

for(int i = 0; i < 6; i++){
  
  printf("\nInsira valores pares para o vetor [1, 20]: ");
  scanf("%d", &vetor[i]);
  
  if(vetor[i] % 2 != 0){
    printf("Valor inválido, insira um número par.\n");
    i--;
  } else{
    if(vetor[i] < 1 || vetor[i] > 20){
      printf("Valor inválido, insira um número entre 1 e 20.\n");
      i--;
    } else if (vetor[i] > maior){
      maior = vetor[i];
    } else if (vetor[i] < menor){
      menor = vetor[i];
    }
  } 
  soma += vetor[i];
}

media = (soma)/6;

printf("\nValores do vetor: {%d, %d, %d, %d, %d, %d}", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4], vetor[5], vetor[6]);
printf("\nmedia: %.2f", media);
printf("\nmaior: %d", maior);
printf("\nmenor: %d", menor);  
  
return 0;
}