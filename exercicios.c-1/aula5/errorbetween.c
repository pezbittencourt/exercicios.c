//Escreva um programa que solicita um número inteiro. Exiba uma mensagem de erro se o número informado estiver entre 15 e 25 ou entre 45 e 50 (inclusive).
#include <stdio.h>

int main(void){
    printf("\e[1;1H\e[2J\b\n");

    int num;
    printf("insira um numero:");
    scanf("%d", &num);

    if (num>=15 && num<=25 || num>=45 && num<=50){
        printf("ERROR");
    }else {
        return 0;
    }


}