/*
Escreva um programa que calcule o salário semanal de um trabalhador. As
entradas são o número de horas trabalhadas na semana e o valor da hora. Até
40h/semana não se acrescenta nenhum adicional. Acima de 40h e até 60h há
um bônus de 50% para essas horas. Acima de 60h há um bônus de 100% para
essas horas
*/
#include <stdio.h>
#include <locale.h>                        
int main () {
  setlocale(LC_ALL, "Portuguese");
    int horasTrabalhadasSemana;
    int valorHora;
    int valorHoraExtra;

    printf("qual foi o total de horas trabalhadas?");
    scanf("%d", &horasTrabalhadasSemana);
    
    printf("qual o valor da hora trabalhada?");
    scanf("%d",&valorHora);
    
    int horaExtra = horasTrabalhadasSemana - 40;
    
    if (horaExtra>0 && horaExtra <=20) {
        valorHoraExtra = horaExtra * (valorHora * 0.5);
        printf ("%d horas extras darão um bônus de %d R$", horaExtra, valorHoraExtra);
    } else if (horaExtra > 20) {
        valorHoraExtra = horaExtra * (valorHora * 2);
    printf ("%d horas extras darão um bônus de %d R$", horaExtra, valorHoraExtra);
    } else {
        printf("sem hora extra");
    }
}