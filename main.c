#include <stdio.h>
/*
  Autor - Matheus Magalhães Madeira
  Última atualização - 14/03/2023
  Objetivo - Faça um algoritmo que segundo uma nota informada pelo usuário, verifique em qual faixa 
  a mesma se encaixa e imprima para o usuário a mensagem correspondente 
*/
int main(void) 
{
  //Declaração de variável
  int nota;
  printf("Nota: ");
  scanf("%i",&nota);//Leitura dos numeros
  //Condição
  if(nota>=8 && nota <=10)
  {
    printf("Ótimo\n");//Impressão de mensagem
  }
  else if(nota>=7 && nota<8)
  {
    printf("Bom\n");//Impressão de mensagem
  }
  else if(nota>=5 && nota<7)
  {
    printf("Regular\n");//Impressão de mensagem
  }
  else if(nota<5)
  {
    printf("Insatisfatório\n");//Impressão de mensagem
  }
  else
    printf("ERRO: Nota inválida\n");//Impressão ERRO
}