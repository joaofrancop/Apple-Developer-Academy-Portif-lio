/*Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.*/

#include <stdio.h>

int main(){

    int a = 1, b = 2;
    int *pa, *pb;

    pa = &a;
    pb = &b;


    printf("\nendereço a = %p", (void*)&pa);
    printf("\nendereço b = %p", (void*)&pb);

    if(*pa > *pb){
        printf("\na é maior");
    } else{
        printf("\nb é maior");
    }

    return 0;
}

/*#include <stdio.h>

int main() {
    // Declaração de duas variáveis inteiras
    int var1, var2;
    
    // Declaração de ponteiros para as variáveis
    int *ptr1, *ptr2;
    
    // Associar os ponteiros aos endereços das variáveis
    ptr1 = &var1;
    ptr2 = &var2;
    
    // Imprimir os endereços das variáveis
    printf("Endereço de var1: %p\n", (void*)ptr1);
    printf("Endereço de var2: %p\n", (void*)ptr2);
    
    // Comparar os endereços e exibir o maior
    if (ptr1 > ptr2) {
        printf("O maior endereço é o de var1: %p\n", (void*)ptr1);
    } else {
        printf("O maior endereço é o de var2: %p\n", (void*)ptr2);
    }

    return 0;
}

*/