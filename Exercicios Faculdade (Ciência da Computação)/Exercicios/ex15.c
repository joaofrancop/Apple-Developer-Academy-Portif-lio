#include <stdio.h>

int main() {

    float combustivel, consumo;
    int distancia;


    printf("Insira a distancia percorrida pelo veiculo:\n ");
    scanf("%i", &distancia);

    printf("Insira a quantia de combustivel gasta:\n ");
    scanf("%f", &combustivel);

    consumo = (distancia/combustivel);

    printf("O consumo medio é de: %.3f km/l ", consumo);

  return 0;
}