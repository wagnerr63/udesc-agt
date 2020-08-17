#include <stdlib.h>
#include <stdio.h>

//Faça um programa que solicite uma temperatura em graus fahrenheit, e os converta para //graus celsius. A fórmula para a conversão é: C = (F − 32.0) * 5.0 / 9.0.
int main() {
  float grausf = 0;
  float grausc = 0;

  printf("Informe a temperatura em graus fahrenheit que será convertida para celsius");
  scanf("%f", &grausf);

  grausc = ((grausf-32)*5)/9;

  printf("%f graus celsius", grausc);


}