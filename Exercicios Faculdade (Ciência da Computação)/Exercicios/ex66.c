/*Foi realizada uma pesquisa entre os habitantes de uma região e coletados os dados de altura e sexo (0 = masc, 1 = fem, 2 = não declarado)das pessoas. Faça um programa que leia 50 dados diferentes e informe:
● a maior e a menor altura encontradas;
● a média de altura das mulheres;
● a média de altura da população;
● o percentual de homens na população*/

#include <stdio.h>

int main() {

int i = 1, sexo, cont_fem = 0, cont_masc = 0;
float maior_alt = 0, menor_alt = 99, media_mulheres, media_populacao, percentual_homens, altura, altura_mulheres, altura_populacao;

  for(i = 1; i <= 50; i++){
    
    printf("Insira altura e sexo da pessoa: \n");
    scanf("%f %d", &altura, &sexo);

    altura_populacao += altura;
    media_populacao = altura_populacao / 50.0;
    
    if(altura > maior_alt){
      maior_alt = altura;
    }
    if(altura < menor_alt){
      menor_alt = altura;
    }
    if(sexo == 1){
      cont_fem++;
      altura_mulheres += altura;
      media_mulheres = altura_mulheres / cont_fem;
      
      printf("%d\n", cont_fem);
    }
    if(sexo == 0){
      cont_masc++;
      percentual_homens = (cont_masc * 100) / 50.0;
    } 
    }
  
  printf("A maior altura é: %.2f\n", maior_alt);
  printf("A menor altura é: %.2f\n", menor_alt);
  printf("A média de altura das mulheres é: %.2f\n", media_mulheres);
  printf("A média de altura da população é: %.2f\n", media_populacao);
  printf("O percentual de homens na população é: %.2f\n", percentual_homens);

  
  return 0;
  }




