/*Faça um programa em C que receba 4 notas de um aluno, calcule sua média, e exiba uma mensagem de aprovação (caso a média seja maior ou igual a 7) ou reprovação (caso contrário). Manipule as variáveis do programa (para leitura, processamento e exibição) APENAS através de ponteiros, nunca utilizando as variáveis originais.*/

/*Faça um programa em C que receba 4 notas de um aluno, calcule sua média, e exiba uma mensagem de aprovação (caso a média seja maior ou igual a 7) ou reprovação (caso contrário). Manipule as variáveis do programa (para leitura, processamento e exibição) APENAS através de ponteiros, nunca utilizando as variáveis originais.*/

#include <stdio.h>

void calculo(float *a, float *b, float *c, float *d, float *media){

    *media = (*a + *b + *c + *d)/4;

}

int main(){

    float nota1, nota2, nota3, nota4, media;

    float *pnota1 = &nota1, *pnota2 = &nota2, *pnota3 = &nota3, *pnota4 = &nota4, *pmedia = &media;

    printf("Insira as notas do aluno:");
    scanf("%f %f %f %f", pnota1, pnota2, pnota3, pnota4);

    calculo(pnota1, pnota2, pnota3, pnota4, pmedia);
       
    if (*pmedia >= 7.0) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado!\n");
    }

    printf("Media = %.2f\n", *pmedia);

    return 0;
}