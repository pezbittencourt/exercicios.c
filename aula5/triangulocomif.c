//Escrever um algoritmo que leia três valores inteiros e verifique se eles podem ser as medidas dos lados de um triângulo.
//Propriedade: o comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois lados.

#include <stdio.h>

int main (void){
    printf("\e[1;1H\e[2J\b\n"); 
int co;
int ca;
int hi;

printf("insira 3 numeros e direi se o triangulo pode ser realizado:");
scanf("%d", &co);
scanf("%d", &ca);
scanf("%d", &hi);
if (co<ca+hi && ca<co+hi && hi<ca+co){
    printf("esse triangulo eh possivel");
}  else {
    printf("nao pode ser feito");
}





}