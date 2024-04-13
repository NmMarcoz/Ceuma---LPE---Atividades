#include <stdio.h>
#include <locale.h>
#include <string.h> 
int main(){
  setlocale("LC_ALL", "Portuguese");
  char nome[20];
  printf("Digite seu nome completo\n");
  gets(nome); //Pega string até o enter ser digitado.
  printf("%s", nome);


  return 0;
}