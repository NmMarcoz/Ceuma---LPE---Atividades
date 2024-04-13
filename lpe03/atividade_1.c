#include <stdio.h>

int main(){
  float number;
  float soma;
  float resultado;
  for(int i=0; i <5; i++){
    printf("Digite sua primeira nota (Números maiores que 0 e menores que 10)\n");
    do{
      scanf("%f", &number);
    }while(number < 0 || number >10);
    soma+= number;
  }
  resultado = soma/5;
  printf("Sua média: \t %.2f \n", resultado);

  return 0;
}