#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    printf("\e[1;1H\e[2J\b\n");

    printf("Quiz Time! \n");
    printf("Teste sobre o Club de Regatas Vasco da Gama\n\n");

    int opcao;
    int resposta;
    int somador;
    int pontos = 0;

    printf("1. Qual o ano de fundação do Vasco da Gama? \n");
    printf("1) 1898\n");
    printf("2) 1899\n");
    printf("3) 1900\n");
    printf("4) 1901\n");
    scanf("%d", &opcao);
    if (opcao == 1)
    {
        pontos++;
    }

    printf("2. Qual o nome do estádio do Vasco da Gama? \n");
    printf("1) São Januário\n");
    printf("2) Maracanã\n");
    printf("3) Engenhão\n");
    printf("4) Maracanãzinho\n");
    scanf("%d", &opcao);
    if (opcao == 1)
    {
        pontos++;
    }

    printf("Quem é o maior artilheiro do clube? \n");
    printf("1) Romário\n");
    printf("2) Edmundo\n");
    printf("3) Roberto Dinamite\n");
    printf("4) Juninho Pernambucano\n");
    scanf("%d", &opcao);
    if (opcao == 3)
    {
        pontos++;
    }

    printf("Quantos titulos ESTADUAIS o Vasco da Gama possui? \n");
    printf("1) 23\n");
    printf("2) 24\n");
    printf("3) 25\n");
    printf("4) 26\n");
    scanf("%d", &opcao);
    if (opcao == 2)
    {
        pontos++;
    }

    printf("Quantas Libertadores o Vasco possui? \n");
    printf("1) 1\n");
    printf("2) 2\n");
    printf("3) 3\n");
    printf("4) 4\n");
    scanf("%d", &opcao);
    if (opcao == 1)
    {
        pontos++;
    }

    printf("Qual o ano da Resposta Histórica? \n");
    printf("1) 1923\n");
    printf("2) 1924\n");
    printf("3) 1928\n");
    printf("4) 1929\n");
    scanf("%d", &opcao);
    if (opcao == 2)
    {
        pontos++;
    }

    printf("Resultado final: %d pontos de 6 perguntas\n", pontos);

    return 0;
}