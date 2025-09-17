#include <stdio.h>

int main() {
    int valor, fatorial = 1;
    printf("qual o valor a ser fatorado?");
    scanf("%d", &valor);
    for (int i = 1; i <= valor; i++) {
        fatorial = fatorial * i;
    }
    printf("o fatorial de %d eh %d", valor, fatorial);
    return 0;
}