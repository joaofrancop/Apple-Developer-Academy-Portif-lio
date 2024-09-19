#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {

    float raio, volume;

    printf("Insira o raio da esfera: \n");
    scanf("%f", &raio);

    volume = ((4.0/3.0)*PI*(pow(raio, 3)));

    printf("O valor do volume da esfera é: %f", volume);

    return 0;
}