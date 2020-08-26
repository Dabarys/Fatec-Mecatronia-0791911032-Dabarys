#include <stdio.h>

int main(void) {
  float a,b,x,y;
  printf("Informe os valores de a, b e x: ");
  //scanf("%f",&a);
  scanf("%f%f%f", &a, &b, &x);
  y=(a*x)+b;
  printf("Resultado: %.3f\n", y);
  return 0;
}
