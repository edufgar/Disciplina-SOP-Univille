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

  FILE* arq;
  arq = fopen("dados.dat","rb");

}