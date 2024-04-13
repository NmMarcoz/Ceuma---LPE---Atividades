#include <stdio.h>

int main(){
  float number1, number2;
  printf("Digite um numero \n");
  scanf("%f", &number1);
  printf("Digite outro numero\n");
  scanf("%f", &number2);
  printf("soma: \t :%.2f \n" , number1+number2);  
  printf("subtração: \t :%.2f \n" , number1-number2);
  printf("multiplicação: \t :%.2f \n" , number1*number2);
  if(number2 != 0){
    printf("soma: \t :%.2f \n" , number1/number2);      
  }else{
    printf("Divisão por zero.");
  }
  
  return 0;
}