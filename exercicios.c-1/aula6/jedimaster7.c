#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    printf("\e[1;1H\e[2J\b\n");

    int opcao;
    int resto;
    int dedosCPU;
    int dedosJogador;
    int soma;

    printf(":: Par ou Impar:: \n\n");
    printf("selecione 1 para IMPAR e 2 para PAR:");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        printf("voce escolheu IMPAR\n");
    }
    else if (opcao == 2)
    {
        printf("voce escolheu PAR\n");
    }
    else
    {
        printf("opcao invalida\n");
        return 0;
    }

    printf("quantos dedos voce quer mostrar?");
    scanf("%d", &dedosJogador);
    dedosCPU = rand() % 6;
    printf("o computador mostrou %d dedos\n", dedosCPU);

    soma = dedosJogador + dedosCPU;
    resto = soma % 2;
    if ((opcao == 1 && resto == 1) || (opcao == 2 && resto == 0)){
        printf("voce ganhou\n");
    }
    else {
        printf("voce perdeu\n");
    }

    return 0;
}
