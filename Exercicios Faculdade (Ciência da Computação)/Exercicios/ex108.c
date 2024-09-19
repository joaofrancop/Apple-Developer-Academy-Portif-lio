/*Escreva um programa que realiza o cadastro de veículos e calcula o valor do
  IPVA.
  a. Receba a quantidade de veículos que serão registrados.
  b. Receba o modelo, o ano de fabricação, o valor do veículo, a placa e o
  número RENAVAM (documento do veículo).
  c. Receba o tipo de combustível que o veículo utiliza: gás, flex(gasolina/etanol)
  ou gasolina. Defina o percentual em relação ao valor do veículo para o
  cálculo do IPVA: 1% para veículos que utilizam gás, 2% para flex e 4% para
  gasolina. Defina que os veículos com mais de 20 (vinte) anos de fabricação
  estão isentos do IPVA.
  d. Calcule o valor do IPVA.
  e. Mostre o modelo, a placa, o RENAVAM e o valor do IPVA de cada veículo*/

#include <stdio.h>

typedef struct {
    char modelo[20];
    int ano;
    float valor;
    char placa[7];
    int renavam;
    char combustivel[10];
} veiculos;

int main(void) {

  int qtd = 2, i;
  char flex[10] = "flex", gasolina[10] = "gasolina", gas[10] = "gas";
  float ipva[qtd];

  //printf("Insira o numero de veiculos: ");
  //scanf("%d", &qtd);
  veiculos v[qtd];

  for(i = 0; i < qtd; i++){

    printf("\n---Cadastro veiculo %d---\n",i+1);
    
    printf("Modelo: ");
    getchar();
    scanf("%[^\n]s", v[i].modelo);

    printf("Ano de fabricação: ");
    scanf("%d", &v[i].ano);

    printf("Valor: ");
    scanf("%f", &v[i].valor);

    printf("Placa: ");
    getchar();
    scanf("%[^\n]s", v[i].placa);

    printf("RENAVAM: ");
    scanf("%d", &v[i].renavam);

    printf("Tipo de combustível (gas, flex, gasolina): ");
    getchar();
    scanf("%[^\n]s", v[i].combustivel);
    
  }

  for(i = 0; i < qtd; i++){
    if(v[i].ano < 2004){
      printf("IPVA Isento");
    }else {
    if(v[i].combustivel == gas){
      ipva[i] = v[i].valor*0.01;
      }else if(v[i].combustivel == flex){
      ipva[i] = v[i].valor*0.02;
      }else if(v[i].combustivel == gasolina){
      ipva[i] = v[i].valor*0.04;
      }
    }
  }  

  for(i = 0; i < qtd; i++){
    printf("\nModelo: %s", v[i].modelo);
    printf("\nPlaca: %s", v[i].placa);
    printf("\nRENAVAM: %d", v[i].renavam);
    printf("\nIPVA: %.2f", ipva[i]);
  }
  
  return 0;
}