/*Escreva uma função recursiva que calcula a potência de um número inteiro x
elevado a um número inteiro y*/
#include <stdio.h>
int potencia(int x, int y)
{
    if (y == 0)
        return 1;
    else
        return x * potencia(x, y - 1);
}
int main()
{
    int base, expoente;
    printf("insira a base e o expoente: ");
    scanf("%d %d", &base, &expoente);
    printf("resultado: %d", potencia(base, expoente));
}