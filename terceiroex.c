#include<stdio.h>

int main(void) {
    printf("\e[1;1H\e[2J\b\n");

  printf("insira um numero e direi se ele é multiplo de 10\n");
    int num;
    scanf("%d", &num);
    if (num%10==0){
        printf("\no numero %d é multiplo de 10",num);
    
    }
    else{
        printf("o numero %d não é multiplo de 10", num);
    }

    return 0;

    }