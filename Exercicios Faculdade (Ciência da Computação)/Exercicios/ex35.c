/*Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:


Perimetro = XX.X


Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem


Area = XX.X*/

#include <stdio.h>

int main(){

    float A, B, C, perimetro, area;

    printf("insira os valores A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

    if(((A+B)>C) || ((B+C)>A) || ((A+C)>B)){
        perimetro = A+B+C;
        printf("%.1f", perimetro);
    } else {
        area = ((A+B)*C)/2;
        printf("%.1f", area);
    }
    return 0;
}