#include <stdio.h>


int main(void){
float temperaturas[3];
//Ler as 3 temperaturas
int i;
for(i = 0; i < 3; i++){
printf("Informe a temperatura %i:", i);
scanf("%f",&temperaturas[i]);
}


float soma;
soma = 0;
for(i = 0; i < 3; i++){
soma = soma + temperaturas[i];
}


float media = soma / i;


printf("Media dos valores: %f\n", media);
for(i=0; i<3;i++){
if(temperaturas[i]<media)
  printf("O valor %f esta abaixo da media.\n", temperaturas[i]);
else if(temperaturas[i]>media)
  printf("O valor %f esta acima da media.\n", temperaturas[i]);
  else
  printf("O valor %f e a media.\n", temperaturas[i]);
}
