#include <stdio.h>

// comparar os valores do vetor e dizer qual valor é maior e qual é menor, e em qual posição ele está

int main()
{
    int v[5], i;
    int maiorNum = 0, menorNum = 0, maiorPos, menorPos;

    printf("insira 5 numeros inteiros para a comparacao:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &v[i]);
        if (i == 0)
        {
            maiorNum = v[i];
            menorNum = v[i];
            maiorPos = i;
            menorPos = i;
        }
        if (v[i] > maiorNum)
        {
            maiorNum = v[i];
            maiorPos = i + 1;
        }
        if (v[i] < menorNum)
        {
            menorNum = v[i];
            menorPos = i + 1;
        }
    }
    printf("o maior numero eh: %d, na posicao: %d\n", maiorNum, maiorPos);
    printf("o menor numero eh: %d, na posicao: %d\n", menorNum, menorPos);
    return 0;
}
