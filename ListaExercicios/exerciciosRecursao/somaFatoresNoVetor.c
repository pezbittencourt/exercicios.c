#include <stdio.h>

int somaVetor (int vet[], int tamanho) {
if (tamanho <= 0) {
    return 0;
}
else {
    return vet[tamanho-1] + somaVetor(vet, tamanho - 1);
}
}
int main () {
    int tamanho, i;
    printf("qual o tamanho do vetor? ");
    scanf("%d", &tamanho);
    int vet[tamanho];
    printf("insira os valores do vetor: ");
    for (i=0;i<tamanho;i++) {
        scanf("%d", &vet[i]);
    }
    printf("a soma dos valores do vetor é: %d", somaVetor(vet, tamanho));
    return 0;
}
