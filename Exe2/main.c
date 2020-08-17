#include <stdlib.h>
#include <stdio.h>

int main() {
  int a = 0;
  int b = 0;

  printf("Informe dois números:");
  scanf("%i", &a);
  scanf( "%i", &b);

  int c = b - a;

  if(c < 0) {
    b = b * 2;
    c = -c;
  }

  printf("O resultado é: %i", c);
  return EXIT_SUCCESS;
}