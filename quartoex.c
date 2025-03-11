#include<stdio.h>

int main(void) {
    printf("\e[1;1H\e[2J\b\n");

    printf("insira dois numeros inteiros");
    int n1;
    int n2;
    scanf("%d %d", &n1, &n2);
    if (n1, n2>10){
        printf("os numeros %d e %d são maiores que 10", n1, n2);
    }
    else if (n1, n2==10){
        printf("os numeros %d e %d são iguais a 10", n1, n2);
    }
    else{
        printf("os numeros %d e %d são menores que 10", n1, n2);
    }



    return 0;

    }