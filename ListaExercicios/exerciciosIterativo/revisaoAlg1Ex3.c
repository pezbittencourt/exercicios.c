/*Escreva um programa que receba a velocidade máxima em uma avenida e a
velocidade com que um motorista estava dirigindo nela. Calcule a multa que o
motorista vai receber, considerando que são pagos R$5,00 por cada km/h que
estiver acima da velocidade permitida (considere apenas números inteiros). Se
a velocidade do motorista estiver dentro do limite, o programa deve informar
que não há multa.
*/


#include <stdio.h>

int main (void) {

int velocidadeMaxima;
int velocidadeMotorista;
int multa = 0;

printf("Velocidade máxima da avenida:");
scanf("%d", &velocidadeMaxima );

printf ("Velodiade do motorista:");
scanf ("%d", &velocidadeMotorista);

int diferencaVelocidade = velocidadeMotorista - velocidadeMaxima;
multa = diferencaVelocidade * 5;

printf("Velocidade máxima permitida: %d \nVelocidade do Motorista: %d \nDiferença de Velocidade: %d", velocidadeMaxima, velocidadeMotorista, diferencaVelocidade);

if (multa >= 0) {
    printf("\nMulta de: %d", multa);
} else {
    printf("\nNão houve multa");
}
 return 0;
}