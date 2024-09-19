/*8. (Beecrowd | 1050) Leia um número inteiro que representa um
código de DDD para discagem interurbana. Em seguida, informe à qual cidade
o DDD pertence, considerando a tabela abaixo:
DDD Destino
61 Brasília
71 Salvador
11 São Paulo
21 Rio de Janeiro
32 Juiz de Fora
19 Campinas
27 Vitória
31 Belo Horizonte
Se a entrada for qualquer outro DDD que não esteja presente na tabela
acima, o programa deverá informar: DDD nao cadastrado.*/

#include <stdio.h>

int main(void){

  int DDD;

  printf("Digite o DDD: ");
  scanf("%d", &DDD);

  switch(DDD){
    case 61:printf("Brasília");break;
    case 71:printf("Salvador");break;
    case 11:printf("São Paulo");break;
    case 21:printf("Rio de Janeiro");break;
    case 32:printf("Juiz de Fora");break;
    case 19:printf("Campinas");break;
    case 27:printf("Vitória");break;
    case 31:printf("Belo Horizonte");break;
    default:printf("DDD não cadastrado");return 1; break;
  }
  return 0;
}