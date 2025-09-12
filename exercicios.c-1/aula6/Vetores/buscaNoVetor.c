/*Leia 8 inteiros em um vetor.
Pergunte ao usuário um número qualquer.
Diga se ele está no vetor e em qual posição.*/
#include <stdio.h>
int main () {
    
    int v[8], i, num;
    
    printf("insira os valores do vetor:\n");
    for (i =0; i< 8; i++) {
        scanf("%d", &v[i]); 
    }
 printf("Qual numero voce gostaria de buscar no vetor?");
scanf ("%d", &num);
 for (i=0; i < 8; i++) {
     if (num == v[i]){
         printf("valor encontrado! %d na posicao %d", num, i);
     break;
     }
 }
return 0;
    
}