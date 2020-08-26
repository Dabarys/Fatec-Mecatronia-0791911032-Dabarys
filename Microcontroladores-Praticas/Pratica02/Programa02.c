#include <stdio.h>
int main(void) {
  float a,b,x;
  printf("Informe os valores de a e b: ");
  scanf("%f%f", &a, &b);
  x=-b/a;
  printf("Resultado da equação de primeiro grau: %.2f\n", x);
  return 0;
}
