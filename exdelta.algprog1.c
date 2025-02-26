#include <stdio.h>
int main(void){
//Fazer um algoritmo para ler os valores dos coeficientes A, B e C de uma equação quadrática. Calcular e imprimir o valor do discriminante (delta). Delta = B²– 4AC.
 printf("Vamos calcular o delta da equação. Insira os valores da A, B e C");
 int a;
 int b;
 int c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
int float delta = (b*b) - 4*(a*c);
printf("seu delta é %d", delta);

 return 0;
}
 
 
