#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char nome[50];
  int qtdDependentes;
  float salarioBruto, salarioLiquido, salarioExtra;
} funcionario;

void ImprimirMenu(){
  printf("\nDigite 1 para menu - Imprimir Funcionario");
  printf("\nDigite 0 para menu - sair\n");
}

void ImprimirFuncionario(funcionario auxFuncionario){
    printf("\nBem vindo \n");
    printf("%s\n", auxFuncionario.nome);
    printf("Seu salario = %.2f", auxFuncionario.salarioBruto);
}

void main(){

  funcionario func;
  
  int escolhaMenu = 2;
  
    printf("Informe seu nome: ");
    fflush(stdin);
    gets(func.nome); 

    printf("Informe a quantidade de dependentes: ");
    scanf("%d" , &func.qtdDependentes);

    printf("Informe o salario bruto: ");
    scanf("%f" , &func.salarioBruto);
    
    while(escolhaMenu != 0){
      ImprimirMenu();
      scanf("%d", &escolhaMenu);
      if(escolhaMenu == 1){
         ImprimirFuncionario(func);
      }
    }
   
  
}