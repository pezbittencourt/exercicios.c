//Escreva um programa solicita um numero e exibe a mensagem "SENAC" se este número for 14, 24, 23, 32 ou 33.

#include <stdio.h>

int main(void){
    printf("\e[1;1H\e[2J\b\n");

    printf("escreva um numero:");
    int num;
    scanf("%d", &num);

    if ( num == 14 || num == 24 ||num == 23 ||num == 32 || num== 33) {
printf("SENAC");
} else {
    return 0;
}

}