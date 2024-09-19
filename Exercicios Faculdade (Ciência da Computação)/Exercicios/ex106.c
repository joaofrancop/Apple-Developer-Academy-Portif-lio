/*Escreva um programa que recebe nome completo, idade, salário, anos de
  experiência na profissão e cargo em uma empresa de N funcionários. Calcule e mostre a
  idade média dos funcionários, o nome do funcionário com maior experiência e o cargo do
  funcionário com maior salário*/

#include <stdio.h>
  
typedef struct {
    char nome[50];
    int idade;
    float salario;
    float experiencia;
    char cargo[50];
} funcionario;


int main(void) {

  int qtd = 4, i;
  float soma = 0.0, media;
  float maiorexp, maiorsalario;
  
  funcionario func[qtd];
  
  for (i = 0; i < qtd; i++){
    printf("--- Cadastrando funcionario %d ---\n", i+1);

    printf("Nome: ");
    //fflush(stdin);
    getchar();
    scanf("%[^\n]s", func[i].nome);
  
    printf("Idade: ");
    scanf("%d", &func[i].idade);

    printf("Salario: ");
    scanf("%f", &func[i].salario);

    printf("Anos de experiencia: ");
    scanf("%f", &func[i].experiencia);

    printf("Cargo: ");
    //fflush(stdin);
    getchar();
    scanf("%s", func[i].cargo);

     soma = soma + func[i].idade;
    
  }

  media = soma/qtd;
  printf("\nMedia de idade dos funcionarios: %.1f\n", media);

  //define indice 0 como maior experiencia
  maiorexp = func[0].experiencia;
  //se encontrar alguem com mais experiencia atualiza a variavel auxiliar
  for(i = 1; i < qtd; i++){
    if(func[i].experiencia > maiorexp){
      maiorexp = func[i].experiencia;
    }
  }

  printf("\nPessoa com maior experiencia: \n");
  for(i = 0; i < qtd; i++){
    if(func[i].experiencia == maiorexp){
      printf("%s\n", func[i].nome);
    }
  }

  
  //define indice 0 como maior experiencia
  maiorsalario = func[0].salario;
  //se encontrar alguem com mais experiencia atualiza a variavel auxiliar
  for(i = 1; i < qtd; i++){
    if(func[i].salario > maiorsalario){
      maiorsalario = func[i].salario;
    }
  }

printf("\nPessoa com maior salario: \n");
  for(i = 0; i < qtd; i++){
    if(func[i].salario == maiorsalario){
      printf("%s\n", func[i].nome);
    }
  }
  
  return 0;
}

