#include <stdio.h>

int main() {
  int idade, dependentes;
  float renda;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: ");
  scanf("%f", &renda);
  printf("Digite o número de dependentes: ");
  scanf("%d", &dependentes);

  if (idade >= 18 && idade <= 65) {
    if (renda < 3000.0) {
      if (dependentes > 2) {
        printf("Você está qualificado para os benefícios sociais\n");
      } else {
        printf("Você não está qualificado para os benefícios devido ao número de dependentes\n");
      }
    } else {
      printf("Você não está qualificado para os benefícios devido à renda\n");
    }
  } else {
    printf("Você não está qualificado para os benefícios devido à idade\n");
  }

  return 0;
}