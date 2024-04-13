#include <stdio.h>

int main(){
  float salarioBruto, emprestimo;
  printf("Digite o valor do seu salário: \n");
  do{
    scanf("%f", &salarioBruto);
  }while(salarioBruto<0);
  printf("Agora digite o valor do empréstimo: \n");
  do{
    scanf("%f", &emprestimo);
  }while(emprestimo<0);

  printf("Valor do salario: \t %.2f \n", salarioBruto);
  printf("Valor do emprestimo \t %.2f\n", emprestimo);
  return 0;
}