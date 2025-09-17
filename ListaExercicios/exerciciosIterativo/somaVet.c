#include <stdio.h>
int main () {
int quant, soma = 0, valor;

printf("quantos valores voce deseja somar? ");
scanf("%d", &quant);
printf("insira os valores: ");
for (int i=0; i<quant; i++) {
    scanf("%d", &valor);
    soma = soma + valor;

}

printf("a soma dos valores inseridos é: %d", soma);
return 0;
}