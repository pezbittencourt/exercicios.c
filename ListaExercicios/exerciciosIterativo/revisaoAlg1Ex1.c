
#include<stdio.h>

int main(void) {
/*
escreva um programa que pergunte um valor em metros e 
imprima o correspondente em dcm, cm e mm
*/


int valorMetro, valorDcm, valorCm, valorMm;

printf("qual o tamanho em metros desejado para a conversão de medidas? \n");
scanf ("%d", &valorMetro);

valorDcm = valorMetro * 10;
valorCm = valorMetro * 100;
valorMm = valorMetro * 1000;

printf ("%d metros em decâmetros:%d \n%d metros em centimetros:%d \n%d metros em milímetros:%d \n", valorMetro, valorDcm, valorMetro, valorCm, valorMetro, valorMm);
}
