/*Uma empresa possui três lojas, cada uma com 6 funcionários. Escreva um programa que forneça à
gerência algumas informações relativas aos salários dos funcionários dessa empresa. Os salários
devem ser armazenados em uma matriz bidimensional (loja X funcionário). O programa deve:
a. preencher a matriz de salários por leitura do teclado;
b. imprimir os salários de todos os funcionários, identificando qual a loja em que trabalha;
c. imprimir o total pago em salários por loja;
d. informar quantos funcionários recebem salário superior a R$ 2.000,00 na primeira loja;
e. informar a média salarial da segunda loja*/

#include <stdio.h>

int main(){

  int matriz[3][6];
  int vetsoma[3] = { 0, 0, 0};
  int l, c, cont = 0;
  float media;

  for(l = 0; l < 3; l++){
    for(c = 0; c < 6; c++){
      printf("Linha %d Coluna %d: ", l, c);
      scanf("%d", &matriz[l][c]);
      if(matriz[l][c] > 2000.00){
        cont++;
      }
    }
    printf("\n");
  }

  for(l = 0; l < 3; l++){
    for(c = 0; c < 6; c++){
      printf("Loja %d - %2d ", (l+1), matriz[l][c]);
    }
    printf("\n");
  }

  for(l = 0; l < 3; l++){
    for(c = 0; c < 6; c++){
      vetsoma[l] += matriz[l][c];
    }
  }

 media = ((vetsoma[1])/6);
  
  printf("\n");
  
    printf("Soma Loja 1 = %d\n", vetsoma[0]);
    printf("Soma Loja 2 = %d\n", vetsoma[1]);
    printf("Soma Loja 3 = %d\n", vetsoma[2]);

    printf("Funcionarios que recebem mais de 2000: %d\n", cont);

    printf("Media do salario da segunda loja: %.2f", media);
  
  return 0;
}