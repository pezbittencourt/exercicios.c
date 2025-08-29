#include <stdio.h>

int verificadorDeNumero(int num, int numDesejado) {

    if (num == 0) {
        return 0;
    }
    int ultimo = num % 10;
    if (ultimo == numDesejado)
    {
        return 1 + verificadorDeNumero(num / 10, numDesejado);
    }
    else
    {
        return verificadorDeNumero(num / 10, numDesejado);
    }
}

int main() {
    int num, numDesejado;
    printf("me diga um numero e qual digito voce deseja verificar quantas vezes ele aparece no numero: ");
    scanf("%d", &num);
    scanf("%d", &numDesejado);

    int resultado = verificadorDeNumero(num, numDesejado);
    printf("o digito %d ocorre %d vezes no numero %d", numDesejado, resultado, num);

    return 0;
}