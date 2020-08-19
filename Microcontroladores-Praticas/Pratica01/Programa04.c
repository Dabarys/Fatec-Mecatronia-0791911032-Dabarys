#include <stdio.h>

int main(void) {
  float real;
  int inteiro;
  char letra;

  printf("Digite um numero real ");
  scanf("%f", &real);
  printf("Digite um numero inteiro ");
  scanf("%i", &inteiro);
  printf("Digite uma letra ");
  scanf(" %c", &letra);

  printf("Valor real: %f\n", real);
  printf("Valor inteiro: %i\n", inteiro);
  printf("Letra digitada: %c\n", letra);

  return 0;
}
