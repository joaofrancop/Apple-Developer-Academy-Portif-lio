/*. Escreva um programa que leia do teclado valores para dois vetores de 4 posições de ponto
flutuante, depois subtraia os dois vetores. Ao final da execução deverá ser impresso o resultado na
tela.
*/

#include <stdio.h>

int main(){

  int i;
  float vetor1[4] = {0, 0, 0, 0};
  float vetor2[4] = {0, 0, 0, 0}; 
  float resultado[4] = {0, 0, 0, 0};

  
  for(i = 0; i < 4; i++){

  printf("Insira os valores para o primeiro vetor: \n");
  scanf("%f", &vetor1[i]);
  }
    for(i = 0; i < 4; i++){
  printf("Insira os valores para o segundo vetor: \n");
  scanf("%f", &vetor2[i]);
    
    resultado[i] = vetor1[i] - vetor2[i];
  }

  for(i = 0; i < 4; i++){
  printf("Resultado: %.2f \n", resultado[i]);
  }
  
  return 0;
}