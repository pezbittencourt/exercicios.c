#include <stdio.h>

int achaValor(int valor){
if (valor <= 0){
    return 0;
}
if (valor % 10 == 3){
    return 1;
}
return achaValor(valor / 10);
}

int main(){
    int valor, resultado;
    printf("Insira um valor: ");
    scanf("%d", &valor);
    resultado = achaValor(valor);
    if (resultado){
        printf("O numero %d possui o digito 3\n", valor);
    } else {
        printf("O numero %d nao possui o digito 3\n", valor);
    }
    return 0;
}