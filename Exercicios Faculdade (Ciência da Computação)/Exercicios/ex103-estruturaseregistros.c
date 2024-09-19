/*Crie um programa que cadastre em registros o nome, o peso e a altura de 5 esportistas. Apresente na tela
  os dados de cada esportista e seu IMC (deve haver um campo para o IMC no registro)*/

#include <stdio.h>

typedef struct {
  char nome[50];
  float peso;
  float altura;
  float imc;
} calculo;

int main(void) {

  calculo x[5];

  for (int i = 0; i < 5; i++){
    printf("insira os dados para calculo do IMC  dos esportistas\n");

    getchar();
    
    printf("Insira o nome: ");
    scanf("%[^\n]s", x[i].nome);
  
    printf("Insira o peso: ");
    scanf("%f", &x[i].peso);

    printf("Insira a altura: ");
    scanf("%f", &x[i].altura);

    printf("\n");
  }
  for (int i = 0; i < 5; i++){
    x[i].imc = (x[i].peso)/(x[i].altura*x[i].altura);
  }

  
  for (int i = 0; i < 5; i++){

    printf("---IMC esportistas---");
    printf("\n"); printf("\n");
    printf("Nome: %s", x[i].nome); printf("\n");
    printf("Peso: %.2f", x[i].peso); printf("\n");
    printf("Altura: %.2f", x[i].altura); printf("\n");
    printf("IMC: %.2f", x[i].imc); printf("\n");
    printf("\n"); printf("\n");
  }

  
  return 0;
}