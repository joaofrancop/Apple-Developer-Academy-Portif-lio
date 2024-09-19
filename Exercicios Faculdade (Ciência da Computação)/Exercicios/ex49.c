/*
(Beecrowd | 1038) Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir,calcule e mostre o valor da conta a pagar

1 Cachorro-quente R$ 12,00
2 X-Salada R$ 15,50
3 X-Bacon R$ 18,00
4 Torrada simples R$ 8,00
5 Refrigerante R$ 4,50
  */

/*#include <stdio.h>

int main(){

int opcao;
  
do{
  printf("Digite uma opção [1-5]:");
  scanf("%d", &opcao);
  
} while ((opcao <= 0) || (opcao > 5));

  return 0;
}
  
 /* int codigo, qtd, continuar = 1, cont = 0;
  float valor = 0;

  while(continuar == 1){

    printf("Digite o codigo do item: ");
    scanf("%i", &codigo);

    printf("Digite a quantidade do item: ");
    scanf("%i", &qtd);
    
  switch (codigo){
    case 1: valor += qtd * 12.00;break;
    case 2: valor += qtd * 15.50;break;
    case 3: valor += qtd * 18.00;break;
    case 4: valor += qtd * 8.00;break;
    case 5: valor += qtd * 4.50;break;
    default: printf ("codigo invalido\n");
    }
    printf("Deseja adicionar mais algum item? (1 para sim, 0 para não)");
    scanf("%i", &continuar);
    cont++;
  }
  
  printf("Total: R$ %.2f", valor);
  
  return 0;
}*/

#include <stdio.h>

int main() {
    int codigo, qtd;
    float valor;
    char continuar;
  
    do {
        printf("Digite o código do item e a quantidade: ");
        scanf("%d %d", &codigo, &qtd);

        switch (codigo) {
            case 1:
                valor = qtd * 12.00;
                break;
            case 2:
                valor = qtd * 15.50;
                break;
            case 3:
                valor = qtd * 18.00;
                break;
            case 4:
                valor = qtd * 8.00;
                break;
            case 5:
                valor = qtd * 4.50;
                break;
            default:
                printf("Código inválido\n");
                continue; // Skip the rest of the loop and restart
        }

        printf("Total a pagar: R$ %.2f\n", valor);

        
        printf("Deseja adicionar mais algum item? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    return 0;
}