#include <stdlib.h>
#include <stdio.h>

int main() {
  int a = 0;
  int b = 0;

  printf("Informe dois números:");
  scanf("%i", &a);
  scanf("%i",&b);

  while(b != 0) {
    if(a > b) {
      a = a - b;
    } else {
      b = b - a;
    }
  }

  printf("Máximo divisor comum: %i", a);
}