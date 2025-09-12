/*Em C, crie um vetor de 100 posições,
preencha com números aleatórios de 1 a 100.
Exiba a média destes.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n = 100;
    int v[100];
    int soma = 0;
    int cont = 0;
    float media;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        v[i] = rand() % 100 + 1;
        if (v[i] < 10)
        {
            printf("%d ", v[i]);
            soma = soma + v[i];
            cont++;
        }
    }
    media = soma / cont;
    printf("\nsoma dos valores menores que 10 na geracao de numeros aleatorios: %d\n", soma);
    printf("A media dos valores menores que 10 eh: %.2f\n", media);
}
