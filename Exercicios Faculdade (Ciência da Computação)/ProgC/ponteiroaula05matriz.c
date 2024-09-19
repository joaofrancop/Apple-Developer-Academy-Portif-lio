#include <stdio.h>

void main(){

    int p00 = 0, p01 = 1, p02 = 2;
    int p10 = 3, p11 = 4, p12 = 5;
    int p20 = 6, p21 = 7, p22 = 8;
    int *linha0, *linha1, *linha2;
    int **matriz;

    linha0 = &p00;
    linha1 = &p10;
    linha2 = &p20;
    matriz = &linha0;

    printf("P00 End = %d\n" , &p00);
    printf("P01 End = %d\n" , &p01);
    printf("P02 End = %d\n" , &p02);
    printf("P10 End = %d\n" , &p10);
    printf("P11 End = %d\n" , &p11);
    printf("P12 End = %d\n" , &p12);
    printf("P20 End = %d\n" , &p20);
    printf("P21 End = %d\n" , &p21);
    printf("P22 End = %d\n" , &p22);

    printf("L0 End = %d\n" , &linha0);
    printf("L1 End = %d\n" , &linha1);
    printf("L2 End = %d\n" , &linha2);

    printf("MR End = %d\n" , matriz);
    printf("MM End = %d\n" , matriz-1);

    linha1--;
    printf("Valor = %d\n", **(matriz-1));

}