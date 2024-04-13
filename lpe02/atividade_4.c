#include <stdio.h>
#include <locale.h>

int main(){
  setlocale("LC_ALL", "Portuguese");
  int integerNumber;
  float realNumber;
  printf("Digite um númeror inteiro: \n");
  scanf("%i", &integerNumber);
  printf("Digite um número real: \n");
  scanf("%f", &realNumber);
  printf("número inteiro: \t %i\n", integerNumber);
  printf("número real: \t %2.2f\n", realNumber);

  return 0;
}