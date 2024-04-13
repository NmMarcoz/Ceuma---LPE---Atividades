#include <stdio.h>
int main(){
  int number;
  printf("Digite um numero inteiro \n");
  scanf("%i", &number);

  if(number%2 == 0){
    printf("par");
  }else{
    printf("impar");
  }

  return 0;
}