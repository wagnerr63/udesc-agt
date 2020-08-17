#include <stdlib.h>
#include <stdio.h>

//Faça um programa que solicite uma temperatura em graus celsius, e os converta para graus //fahrenheit. A fórmula para a conversão é: F = (C * 9.0 / 5.0) + 32.0.
int main() {
  float graus = 0;
  float convertido;

  printf("Informe a temperatura em graus celsius que será convertida para fahrenheit");
  scanf("%f", &graus);

  convertido = ((graus*9)/5)+32;

  printf("%f fahrenheit", convertido);

}