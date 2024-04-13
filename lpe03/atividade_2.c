#include <stdio.h>

int main(){
  printf("Digite sua idade \n");
  int idade;
  do{
    scanf("%i", &idade);
  }while(idade <= 0);
  int idadeDias = idade*365;
  printf("Sua idade em dias: \t %i \n", idadeDias);
  return 0;
}