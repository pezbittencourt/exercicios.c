//Escreva um programa que lê um inteiro positivo e verifica se ele contém o
//dígito 3 em qualquer posição.
#include <stdio.h>
#include <string.h>
int main(){
 
 char numero[20];
 int contem3 = 0;

 
 printf("insira um numero positivo e direi se possui o numero 3 nele:\n");
 scanf("%s", numero);
 
 
 for(size_t i =0; i < strlen(numero); i++){
     if (numero[i] == '3') {
         contem3 = 1;
         break;
     }
 }
 if (contem3) {
     printf("O numero %s contem o digito 3.\n", numero);
 } else {
     printf("o numero %s nao contem o digito 3.\n", numero);
 }
 
 return 0;
    
}
