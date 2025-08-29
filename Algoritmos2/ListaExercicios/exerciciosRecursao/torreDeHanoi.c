#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// torre de hanoi
/*lógica da recursão neste caso: separar o problema na menor escala possivel
caso base: if discos == 1 mover disco da torre de origem para o destino
vão sendo divididos em blocos menores de n-1 até que, no final, sobre somente 1 disco

*/

void movimentacao(int de, int para)
{
    // imprime a movimentação do disco referente às torres
    printf("%d, %d \n", de, para);
}

void hanoi(int quantiDiscos, int origem, int destino, int auxiliar)
{
    // faz a movimentação geral dos discos

    if (quantiDiscos == 1)
    { // caso base
        movimentacao(origem, destino);
        return;
    }

    hanoi(quantiDiscos - 1, origem, auxiliar, destino);
    movimentacao(origem, destino); // movimento do maior disco
    hanoi(quantiDiscos - 1, auxiliar, destino, origem);
}
int main()
{
    int n = 5;
    int origem = 0, destino = 2, auxiliar = 1;

    hanoi(n, origem, destino, auxiliar);
    return 0;
}
