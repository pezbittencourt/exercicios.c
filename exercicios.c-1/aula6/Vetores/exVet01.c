/*2. Soma dos elementos

Faça um programa que:
Leia um vetor de 5 números inteiros.
Calcule e mostre a soma de todos os elementos.*/


#include <stdio.h>

int main () {
    int v[5], i, soma;
    
    printf("insira 5 numeros inteiros para a soma:");
    for (i =0; i < 5; i++) {
        scanf("%d", &v[i]);
        soma = soma + v[i];
    }
    printf("%d", soma);
    return 0;
}