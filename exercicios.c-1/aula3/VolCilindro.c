#include <stdio.h>
int main() {
int raio;
int height;

printf("Qual o raio e a altura do cilindro?");
scanf("%d", &raio);
scanf("%d", &height);
int d = raio*2;
int v = d*height;

printf("o volume do cilindro é de %dcm^3", v);

return 0;

} 