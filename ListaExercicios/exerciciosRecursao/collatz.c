#include <stdio.h>

int collatz(int n){
    if (n==1){
        return 1;
    }
    if (n%2==0){
    return 1 + collatz (n/2);    
    }
    else{
        return 1 + collatz(3*n + 1);
    }
}

int main () {
    int valor;
    printf("insira um valor inteiro positivo: ");
    scanf("%d", &valor);
printf("foram necessários %d passos para chegar finalizar a lista de collatz", collatz(valor));
    return 0;
}