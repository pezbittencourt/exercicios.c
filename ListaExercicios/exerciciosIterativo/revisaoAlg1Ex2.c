//tabuada de 1 a 9 utilizando matriz e funções

#include <stdio.h>

#define n 10

void geraTabuada(int tabuada[n][n]) { //função para gerar a tabuada

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            tabuada[i][j] = i * j; // guarda o valor na matriz
        }
    }
}

void imprimeTabuada(int tabuada[n][n]){ //função para imprimir a tabuada

    for (int i= 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            printf("%d x %d  = %d\n", i, j, tabuada[i][j]);
        }
        printf("\n"); // adiciona uma linha em branco após cada linha da tabuada
    }

}

int main (void) {

    int tabuada[n][n];
    geraTabuada(tabuada); //chama a função que gera a tabuada
    imprimeTabuada(tabuada);  //chama a função que imprime a tabuada
}
