/*[4BIM] - Escrita e Leitura de arquivos em modo texto

Condições iniciais:

b) Desenvolva na linguagem C, um programa que realiza a escrita de um arquivo. O arquivo deve conter pelo no mínimo 4 colunas. O arquivo deve sempre ser substituído se existir.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  int codigo = 1;
  char nome[20] = "produto 1";
  float preco = 14.00;
  float desconto = 2.00;

  FILE* arq;
  if ((arq = fopen("produtosb.txt'", "w")) == NULL)
  {
    printf("\nErro na abertura/criação do arquivo!");
    exit(1);
  }
  else
  {
    printf("\nArquivo criado/sobreescrito para inclusão!");
  }

  fprintf(arq, "%d - %s - %f  %f", codigo, nome, preco, desconto);
  printf("\nProduto gravado!");
  fclose(arq);
  
//-------------------------------------

  /*if ((arq = fopen("produtosb.txt'", "r")) == NULL)
  {
    printf("\nErro na abertura do arquivo!");
    exit(1);
  }
  else
  {
    printf("\nArquivo aberto para leitura!");
  }

  fread(&lerProd, sizeof(sProduto), 1, arq);
  fclose(arq);

  printf("\n");
  printf("%i", codigo);
  printf("\n");
  printf("%s", lerProd.nome);
  printf("\n");
  printf("%f", lerProd.preco);
  printf("\n");
  printf("%f", lerProd.desconto);
  printf("\n");
  printf("Total %f", lerProd.preco - lerProd.desconto);
  printf("\n");*/

  return(0);
}