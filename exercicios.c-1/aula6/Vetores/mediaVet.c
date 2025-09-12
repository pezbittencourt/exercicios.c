/*5. Média e valores acima da média

Faça um programa que:
Leia 10 números reais em um vetor.
Calcule a média desses números.
Exiba todos os valores que estão acima da média.*/

#include <stdio.h>

int main () {
int v[10], i, soma = 0;
float media;

printf("insira os valores a serem atribuidos no vetor: ");
for (i = 0; i < 10; i++) {
    scanf("%d", &v[i]);
soma = soma + v[i];
}
media = soma / 10;
printf("media: %f\nvalores acima da média:\n", media);
for (i =0; i< 10; i++) {
    if (v[i] > media) {
        printf("%d\n", v[i]);
    }
}
}