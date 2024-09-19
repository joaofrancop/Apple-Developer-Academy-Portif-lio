/*5. Sabe-se que, para iluminar de maneira correta os cômodos de uma casa,
para cada m² deve-se usar 18W de potência. Faça um programa que recebe as duas
dimensões de um cômodo (em metros), calcule e mostre a sua área (em m²) e a potência
de iluminação em watts que deverá ser usada.*/

#include <stdio.h>

int main()  {

float largura, comprimento, area, potencia;

  printf("insira a largura do comodo:\n ");
  scanf("%f", &largura);

  printf("insira o comprimento do comodo:\n ");
  scanf("%f", &comprimento);

  area = largura * comprimento;

  potencia = area / 18;

  printf("a area do comodo é %.2f e a potencia necessaria de iluminacao é %.2f w\n", area, potencia);

  return 0;
}