/*Construa um algoritmo que receba um número inteiro e verifiquese o mesmo é primo*/

#include <stdio.h>

int main(){

    int num, i;

    printf("Insira um numero: ");
    scanf("%d", &num);

    if(num <= 1){
            printf("O numero nao eh primo\n");
            return 0;
        }

    for(i = 2; i * i <= num; i++){

            if(num % i == 0){
            printf("O numero nao eh primo\n");
            return 0;
        }
    }

    printf("O numero eh primo\n");

return 0;
}