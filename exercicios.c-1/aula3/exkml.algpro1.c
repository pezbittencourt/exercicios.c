#include <stdio.h>

int main(void){ 
//Escreva um algoritmo para calcular o consumo médio de um automóvel (medido em km/l), dado que são conhecidos a distância total percorrida e o volume de combustível consumido para percorrê-la (medido em litros)
int d;
int g;
printf("vamos analisar o consumo médio do seu veículo.\n Qual foi a sua quilometragem hoje?\n");
scanf("%d", &d);
printf("Quanto litros de combustível você gastou?");
scanf("%d", &g);
int kml = d/g;
printf("o consumo total de combustível do seu veículo é de %dkm/l", kml);

    return 0;
}
