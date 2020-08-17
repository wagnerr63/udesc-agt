#include <stdlib.h>
#include <stdio.h>

//Faça um programa que solicite dois números, e imprima as seguintes informações:
// A soma dos números.
// O produto dos números.
// Qual dos dois é maior.

int main() {

  int a, b;

  printf("Informe dois números:");
  scanf("%i", &a);
  scanf( "%i", &b);

  printf("Soma: %i \n", a+b);
  printf("Produto: %i \n", a*b);

  if(a>b){
      printf("O número %i é o maior.", a);
  }else{
      printf("O número %i é o maior.", b);
  }

}