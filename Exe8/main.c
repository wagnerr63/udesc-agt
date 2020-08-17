#include <stdlib.h>
#include <stdio.h>

//Faça um programa que solicite o peso (P) e altura (A) de uma pessoa, e calcule seu IMC, //lembrando que o IMC = P / (A * A), e informe:

//Se abaixo de 17, que a pessoa está muito abaixo do peso.
//Se entre 17 e 30, a pessoa está na média.
//Se acima de 30, a pessoa está muito acima do peso.

int main() {

  float peso, altura;
  float imc;

  printf("Digite seu peso em KG e logo em seguida sua altura em metros (1.73): ");
  scanf("%f", &peso);
  scanf("%f", &altura);

  imc = (peso)/(altura*altura);

  if(imc<17){
    printf("Seu IMC é %f, você está muito abaixo do peso.", imc);
  }else if(imc>=17 && imc<30){
    printf("Seu IMC é %f, você está na média de peso.", imc);
  }else{
    printf("Seu IMC é %f, você está muito acima do peso.", imc);
  }

}