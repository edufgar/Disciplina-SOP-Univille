/*[4BIM] - Escrita e Leitura de arquivos em modo texto

Condições iniciais:

a) Desenvolva na linguagem C, um programa que realiza a leitura de um arquivo.  O arquivo deve conter pelo menos três colunas. Um texto, um inteiro e um decimal.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  FILE* arq;
  if ((arq = fopen("dados.txt'", "w")) == NULL)
  {
    printf("\nErro na abertura/criação do arquivo!");
    exit(1);
  }
  else
  {
    printf("\nArquivo criado/aberto para inclusão!");
  }

  if (fprintf(arq, "%s %i %f", "texto", 1, 2.123456) != 1)
  {
    printf("\nErro na gravação.");
  }
  else
  {
    printf("\n Dados gravados.");
  }
  fclose(arq);
  
//-------------------------------------

  if ((arq = fopen("dados.txt'", "r")) == NULL)
  {
    printf("\nErro na abertura do arquivo!");
    exit(1);
  }
  else
  {
    printf("\nArquivo aberto para leitura!");
  }

  char texto[20];
  int inteiro;
  float decimal;


  fscanf(arq, "%s %i %f", texto, &inteiro, &decimal);
  printf("\n%s %i %f", texto, inteiro, decimal);
  fclose(arq);

  return(0);
}