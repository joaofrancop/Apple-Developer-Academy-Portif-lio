/*Faça um programa que leia n números e, para cada desses números, diga se é primo ou não. Pare a repetição quando for lido um número negativo.*/

#include <stdio.h>

int main(){

    int num = 1, i, primo;

    while(num >= 0){
      
        printf("Insira um numero: ");
        scanf("%d", &num);

      if(num == 1){
        printf("false\n");
        continue;
      }
      primo = 1;
      
    for(i = 2; i * i <= num; i++){
        if(num % i == 0){
            primo = 0;
          break;
        } 
     }
      if((primo == 1)&&(num>0)){
          printf("true\n");
      } else if(primo == 0){
          printf("false\n");
      }else{
        printf("finish\n");
      }
    }
  
return 0;
}