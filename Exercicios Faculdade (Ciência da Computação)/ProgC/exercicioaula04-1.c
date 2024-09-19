#include <stdio.h>
#include <string.h>

int StrLenReferencia (char *s){
    
    char *str = s;
    while ( *s != '\0'){
        s++;
    }
    return (s - str);
}

int strLenParametro ( char s[]){
    
    int i = 0;
    while (s[i] != '\0'){
        i++;
    }
    return i;
}
int main(){

    char s[100];

    printf("Digite uma string: ");
    fgets(s, sizeof(s), stdin);

    int parametro = strLenParametro(s);

    int referencia = StrLenReferencia(s);

    printf("\nValor por parametro = %d", parametro);
    printf("\nValor por referencia = %d", referencia);

    return 0;

}