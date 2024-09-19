/*Escreva um programa que mostra na tela todos os números inteiros divisíveis por 7 contidos no intervalo fechado [0, 1000].*/

#include <stdio.h>

int main(){

int i = 1;

for(i = 1;((i <= 1000)&&(i >= 0)); i++){
    if (i % 7 == 0){
       printf("%d\n", i);
    }
}
return 0;
}