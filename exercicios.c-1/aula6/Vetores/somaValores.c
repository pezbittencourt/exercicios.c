#include <stdio.h>

int main() {
    int v[5], i, soma;

    printf("insira 5 numeros inteiros para a soma:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &v[i]);
        soma = soma + v[i];
    }

    printf("os numeros inseridos foram:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", v[i]);
    }

    printf("a soma dos valores apresentados é: %d", soma);
    return 0;
}