//Faça um algoritmo que receba um número e mostre uma mensagem caso este número seja maior que 80, menor que 25 ou igual a 40.
#include <stdio.h>

int main(void){
    printf("\e[1;1H\e[2J\b\n");

    int num;
    printf("insira um numero:");
    scanf("%d", &num);

    if (num>80 || num<25 ||num==40){

        printf("este numero é valido:");
    } else{ printf("este numero nao eh valido");

    }
}