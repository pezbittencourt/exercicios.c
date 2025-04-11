#include <stdio.h>
int main(void){
    //Em uma festa, homens pagam 20 reais de entrada e as mulheres pagam 17. Crie um programa que pergunta quantos homens e quantas mulheres participaram da festa e calcula o valor total arrecadado com as entradas.
    int h;
    int m;
    printf("quantos homens e quantas mulheres entraram na festa hoje?");
    scanf("%d", &h);
    scanf("%d", &m);
    int valor_homem = h*20;
    int valor_mulher = m*17;
    int vtotal = valor_homem+valor_mulher;
    printf("o valor total arrecadado foi de %d", vtotal);
    
    return 0;
}
