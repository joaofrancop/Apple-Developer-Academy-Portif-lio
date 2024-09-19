/*10. Antes de o racionamento de energia ser decretado, quase ninguém falava em
quilowatts; mas, agora, todos incorporaram essa palavra em seu vocabulário. Sabendo-se
que 100 quilowatts de energia custa um sétimo do salário mínimo, faça um programa que
receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência e
imprima:
● o valor em reais de cada quilowatt;
● o valor em reais a ser pago.*/

#include <stdio.h>

int main() {

float salario_minimo, valor_quilowatts, qtd, valor;

  printf("insira o valor do salario minimo:\n");
  scanf("%f", &salario_minimo);

  valor_quilowatts = salario_minimo/700;

  printf("insira a quantidade de quilowatts gasta:\n");
  scanf("%f", &qtd);

  valor = valor_quilowatts * qtd;

  printf("o valor em reais de cada quilowatt é: %.2f, e o valor a ser pago em reias pela residencia é %.2f\n", valor_quilowatts, valor);

  return 0;
}