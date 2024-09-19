/*2. Escreva um programa, utilizando estrutura, que atende os itens abaixo:
  a. O programa recebe e armazena o nome de N cidades com renda per capita,
  IDH (índice de desenvolvimento humano) e população. O usuário fornece a
  quantidade de cidades N e as demais informações.
  b. Calcular e mostrar a média da renda per capita das N cidades.
  c. Determinar e mostrar o nome da cidade com maior população.
  d. Mostre a renda per capita, IDH e população de acordo com o nome de uma
  cidade digitada pelo usuário*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[20];
    float renda;
    float idh;
    int populacao;
} cidade;

int main(void) {

  char x[20];
  int qtd = 4, i;
  float media, maiorpopulacao, soma = 0.0;

  printf("Insira o numero de cidades: ");
  scanf("%d", &qtd);
  cidade c[qtd];

  for(i = 0; i < qtd; i++){

    printf("\n---Registrando cidade %d---\n", i+1);

    printf("Nome da cidade: ");
    getchar();
    fflush(stdin);
    scanf("%[^\n]s", c[i].nome);

    printf("Renda per capita: ");
    scanf("%f", &c[i].renda);

    printf("IDH: ");
    scanf("%f", &c[i].idh);

    printf("Populacao: ");
    scanf("%d", &c[i].populacao);

    soma = soma + c[i].renda;
  }
  media = soma/qtd;
  printf("\nMedia da renda per capita das cidades: %2.f", media);


  maiorpopulacao = c[0].populacao;
  for(i = 0; i < qtd; i++){
    if(c[i].populacao > maiorpopulacao){
      maiorpopulacao = c[i].populacao;
    }
  }
  printf("\nA cidade com maior população: ");
  for(i = 0; i < qtd; i++){
    if(c[i].populacao == maiorpopulacao){
      printf("%s", c[i].nome);
    }
  }
printf("\n");

  printf("\nInsira a cidade: ");
  scanf("%s", x);

  for(i = 0; i < qtd; i++){
    if (strcmp(x, c[i].nome) == 0) {
      printf("Renda per capita: %.2f\n", c[i].renda);
      printf("IDH: %.3f\n", c[i].idh);
      printf("População: %d\n", c[i].populacao);
    }
  }
  
  return 0;
}