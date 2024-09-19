/*jogo da memoria*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  int linhas, colunas, l, c, g;
  char character = 'X';

  do{
  printf("Linhas e Colunas: ");
  scanf("%d %d", &linhas, &colunas);
  if((linhas * colunas) % 2 != 0){
    printf("Inválido, insira numero com produto par: ");
    }
  }while((linhas * colunas) % 2 != 0);
  
  int mjogo[linhas][colunas];
  int mgabarito[linhas][colunas];

  printf("Jogo:\n");
  
  for(l = 0; l < linhas; l++){
    for(c = 0; c < colunas; c++){
      mjogo[linhas][colunas] = character;
      printf("%3c", mjogo[linhas][colunas]);
    }
    printf("\n");
  }
  
  printf("\n");
  
printf("Gabarito:\n");
  
  for(l = 0; l < linhas; l++){
    for(c = 0; c < colunas; c++){
      mgabarito[linhas][colunas] = character;
      printf("%3c", mgabarito[linhas][colunas]);
    }
    printf("\n");
  }
  for(l = 0; l < linhas; l++){
    for(c = 0; c < colunas; c++){
      if(mgabarito[linhas][colunas] == character){
      g = (linhas*colunas)/2;
   mgabarito[linhas][colunas] = rand() % g + 1;
    printf("%3d", mgabarito[linhas][colunas]);}
    }
    printf("\n");
  }

  return 0;
}
