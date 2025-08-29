//Escreva uma função recursiva que recebe um array de inteiros e retorna o
//produto dos elementos do array.

#include <stdio.h>

int somaArray(int arr[], int tamArray){

    if (tamArray == 1) {
        return arr[0];
    }

    return arr[tamArray-1] * somaArray (arr, tamArray-1);
}

int main()
{
    int tamArray, valArray; // tamanho do array e seus valores

    printf("digite o tamanho total da array: ");
    scanf("%d", &tamArray);  // escaneando o tamanho da array
    int arr[tamArray]; // entrada da array com tamanho definido pelo usuário

    printf("insira agora os valores da array: ");
    for (valArray = 0; valArray < tamArray; valArray++)
    {
        scanf("%d", &arr[valArray]);
    }

    int resultado = somaArray(arr, tamArray);

    printf("soma dos dígitos da array: %d\n", resultado);


}