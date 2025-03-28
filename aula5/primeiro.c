#include<stdio.h>

int main(void) {
    printf("\e[1;1H\e[2J\b\n");

  printf ("insira um numero e direi se  o numero é par ou impar:\n");
    int num;
    scanf("%d", &num);
    if (num%2==0){
        printf("o numero %d é par",num);
    
    }
    else{
        printf("o numero %d é impar", num);
    }

    return 0;

    }
