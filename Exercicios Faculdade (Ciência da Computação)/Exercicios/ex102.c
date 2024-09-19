/*Crie um programa que calcule XY
   (X elevado a Y), sendo que os valores de X e Y devem ser números
  do tipo double, positivos, informados pelo usuário. O resultado deve ser exibido na tela.
*/

#include <stdio.h>
#include <math.h>

void elevado(x,y){
   double resultado;
  resultado = pow(x, y);
  printf("Resultado: %.2lf", resultado);
}

double calculo(){
  double resultado;
  double x, y;
  do{
    printf("Insira numeros double, positivos: ");
    scanf("%lf %lf", x, y);
  }while ((x <= 0) && (y <= 0));

  return resultado;
}


int main(void) {

  double resultado;

  resultado = calculo();

  
  return 0;
}