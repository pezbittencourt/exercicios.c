#include <stdio.h>

int main () {
int i;
printf("Qual será o tamanho do vetor? ");
scanf("%d", &i);

int v[i];

printf("Insira os valores do vetor: ");
for (int j=0;j<i;j++) {
    scanf("%d", &v[j]);    
}

int maior = v[0];

for (int j=1;j<i;j++) {
    if (v[j]>maior) {
        maior = v[j];
    }
}
printf("o maior valor dentro do vetor é: %d", maior);
return 0;
}