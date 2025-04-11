#include<stdio.h>

int main(void) {
    printf("\e[1;1H\e[2J\b\n");

 printf("Escreva um programa que converta um intervalo de tempo dado em segundos, em: horas, minutos e segundos. \n");

int segundos;
int horas;
int minutos;
int segundos_restantes;

printf("insira o intervalo de tempo em segundos: ");
scanf("%d", &segundos);

horas = segundos/3600;
segundos_restantes = segundos%3600;
minutos = segundos_restantes/60;
segundos_restantes = segundos_restantes%60;

printf("o intervalo de tempo é de %d horas, %d minutos e %d segundos", horas, minutos, segundos_restantes);
    return 0;

}