/*Escreva um programa para receber do usuário um mês (de 1 a 12) e um ano (de
0 D.C. em diante) e mostrar o número de dias daquele mês daquele ano. Tente
fazer usando switch/case.
*/
#include <stdio.h>

int main () {

int mes, ano;

printf("Digite o mês desejado (1 a 12):");
scanf("%d", &mes);

printf("Digite o ano desejado (0 D.C. em diante):");
scanf("%d", &ano);


switch (mes) {

    case 1: // Janeiro
        printf("Janeiro tem 31 dias.\n");
        break;
        
    case 2: // Fevereiro
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            printf("Fevereiro tem 29 dias (ano bissexto).\n");
        } else {
            printf("Fevereiro tem 28 dias.\n");
        }
        break;

    case 3: // Março
        printf("Março tem 31 dias.\n");
        break;
    case 4: // Abril
        printf("Abril tem 30 dias.\n");
        break;
    case 5: // Maio
        printf("Maio tem 31 dias.\n");
        break;
    case 6: // Junho
        printf("Junho tem 30 dias.\n");
        break;
    case 7: // Julho
        printf("Julho tem 31 dias.\n");
        break;
    case 8: // Agosto   
        printf("Agosto tem 31 dias.\n");
        break;
    case 9: // Setembro
        printf("Setembro tem 30 dias.\n");
        break;
    case 10: // Outubro
        printf("Outubro tem 31 dias.\n");
        break;
    case 11: // Novembro
        printf("Novembro tem 30 dias.\n");
        break;
    case 12: // Dezembro
        printf("Dezembro tem 31 dias.\n");
        break;

        default:
        printf("Mês inválido. Por favor, digite um número entre 1 e 12.\n");
        break;

}

}