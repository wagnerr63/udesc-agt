#include <stdlib.h>
#include <stdio.h>

int main() {
  int a = 0;
  int b = 0;

  printf("Digite o valor de a:");
  scanf("%i", &a);
  printf("Digite o valor de b:");
  scanf("%i", &b);

  int x = b;
  b = a;
  a = x;

  printf("Novo valor de a: %i \n", a);
  printf("Novo valor de b: %i", b);
  return EXIT_SUCCESS;
}