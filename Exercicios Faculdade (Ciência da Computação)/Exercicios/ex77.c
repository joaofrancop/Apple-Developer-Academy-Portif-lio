/*Com o objetivo de ter um maior controle financeiro, Julius
e Rochelle têm registrado todas as receitas e despesas da família. Sabendo que Julius
possui dois empregos e Rochelle possui um emprego, escreva um programa que solicite
os salários de ambos e calcule a soma da receita mensal da família. Na sequência,
solicite que eles digitem as despesas da família no teclado e faça o seguinte:
● Se a soma das despesas for menor que a metade da receita mensal da família,
imprima na tela a mensagem “Eu não preciso disso, meu marido tem dois
empregos” e o valor atual das despesas;
● Se a soma das despesas da família for maior ou igual à metade da receita mensal
da família, imprima na tela a mensagem “Se você não comprar nada, o desconto é
bem maior” e o valor atual das despesas.
Repita esse processo até que as despesas excedam a receita mensal da família,
então imprima na tela a mensagem “Ei carinha que mora logo ali, me passa um dólar” e
finalize a execução do programa.*/

#include <stdio.h>

int main(void){

  float salarioJulius1, salarioJulius2, salarioRochelle, despesas = 0, receita, soma = 0;

  printf("\nInsira o primeiro salario de Julius: ");
  scanf("%f", &salarioJulius1);

  printf("\nInsira o segundo salario de Julius: ");
  scanf("%f", &salarioJulius2);

  printf("\nInsira o salario de Rochelle: ");
  scanf("%f", &salarioRochelle);

  receita = salarioJulius1 + salarioJulius2 + salarioRochelle;

  while(despesas <= receita){
  printf("\nInsira as despesas da família: ");
  scanf("%f", &despesas);

  soma = despesas + soma;
    
  if(despesas<=receita/2){
    printf("\nEu não preciso disso, meu marido tem dois empregos.");
  } else if(despesas>=receita/2){
    printf("\nSe você não comprar nada, o desconto é bem maior");
  }  
}
  printf("Ei carinha que mora logo ali, me passa um dólar.");
  
  return 0;
}
