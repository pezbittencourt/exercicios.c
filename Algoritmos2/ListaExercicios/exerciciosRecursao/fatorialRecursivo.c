#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//Cálculo de um numero com função recursiva

/* lógica por trás da fatoração: multiplicação de 
um número * o numero anterior sucessivamente
até chegar a 1!
*/

int fatorial (int n) {
if (n == 0 || n == 1) {
    return 1;
} else {
return fatorial(n-1) * n;

}
}

int main (){
int n;
printf("Qual numero que voce gostaria de saber o fatorial?");
scanf ("%d", &n);

printf("O valor total fatorial de %d eh: %d", n, fatorial(n));

}
