/*[4BIM] - Escrita e Leitura de arquivos em modo binário

Condições iniciais:

• Escrita e leitura de arquivos em modo binário

a) Desenvolva um programa para escrever os dados (nome, matrícula, média dos bimestres, quantidade de faltas ) dos alunos em uma determinada disciplina. Utilize estruturas.

b) Desenvolva um programa que realiza a leitura dos dados criados na etapa anterior.

c) Desafio: Crie um programa que delete um registro de aluno do arquivo. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  struct ficha_aluno {
    char nome[50];
    int matricula;
    float media;
    int faltas;
  } sAluno;
  struct ficha_aluno aluno = {"Aluno 1", 1, 8.00, 4};

  FILE* arq;
  if ((arq = fopen("dados.dat'", "ab")) == NULL)
  {
    printf("\nErro na abertura/criação do arquivo!");
    exit(1);
  }
  else
  {
    printf("\nArquivo criado/aberto para inclusão!");
  }

  if (fwrite(&aluno, sizeof(sAluno),1, arq) != 1)
  {
    printf("\nErro na gravação.");
  }
  else
  {
    printf("\nDados gravados.");
  }
  fclose(arq);
  
//-------------------------------------

  if ((arq = fopen("dados.dat'", "r")) == NULL)
  {
    printf("\nErro na abertura do arquivo!");
    exit(1);
  }
  else
  {
    printf("\nArquivo aberto para leitura!");
  }

  struct ficha_aluno lerAluno;
  fread(&lerAluno, sizeof(sAluno), 1, arq);
  printf("\nNome: %s", lerAluno.nome);
  printf("\nMatrícula: %d", lerAluno.matricula);
  printf("\nMédia: %f", lerAluno.media);
  printf("\nFaltas: %d", lerAluno.faltas);
  
  fclose(arq);

  return(0);
}