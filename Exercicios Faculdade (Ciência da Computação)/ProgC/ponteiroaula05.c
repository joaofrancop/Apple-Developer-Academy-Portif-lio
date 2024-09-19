#include <stdio.h>

void main(){

    int vetor[] = { 1, 2, 3, 4, 5}, i;

    for ( i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }    

    printf("\n");

   for ( i = 0; i < 5; i++){
        printf("%d ", *(vetor+i));
    }    
 
}