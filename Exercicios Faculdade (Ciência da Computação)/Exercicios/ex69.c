/*Escreva um algoritmo para validar um lote de recibos bancários.O programa deverá inicialmente solicitar o valor (soma) total do lote e o número de recibos. A seguir deverá ler o valor de cada recibo calculando o valor (soma) total. Após a digitação dos valores de todos os recibos, o programa deverá imprimir as seguintes mensagens: “LOTE Ok” se a soma
informada for igual a soma calculada; “Diferença negativa” se a soma calculada for menor que a informada; e “Diferença positiva” se a soma calculada formaior que a informada. Observação: O valor da diferença deve ser impresso(caso exista)*/

#include <stdio.h>

int main(void){

  int i = 1, numrecibos;
  float valor_lote, soma_recibos = 0, valor_recibo;

  printf("Insira a soma total do lote: ");
  scanf("%f", &valor_lote);

  printf("Insira o número de recibos: ");
  scanf("%d", &numrecibos);


  while(i <= numrecibos){

    printf("\nInsira o valor do recibo: ");
    scanf("%f", &valor_recibo);
    
    soma_recibos += valor_recibo;
    i++;
      printf("\n%d", i);
      
    }
  if(soma_recibos == valor_lote){
    printf("Lote ok");
  }else if(soma_recibos > valor_lote){
    printf("Diferença positiva");
  }else {
    printf("Diferença negativa");
  }
  return 0;
}

/*#include <stdio.h>

int main(void) {
    int i = 1, numrecibos;
    float valor_lote, soma_recibos = 0, valor_recibo;

    printf("Insira a soma total do lote: ");
    scanf("%f", &valor_lote);

    printf("Insira o número de recibos: ");
    scanf("%d", &numrecibos);

    while (i <= numrecibos) {
        printf("Insira o valor do recibo %d: ", i);
        scanf("%f", &valor_recibo);
        soma_recibos += valor_recibo;
        i++;
    }

    if (soma_recibos == valor_lote) {
        printf("Lote ok\n");
    } else if (soma_recibos > valor_lote) {
        printf("Diferença positiva\n");
    } else {
        printf("Diferença negativa\n");
    }

    return 0;
}*/
