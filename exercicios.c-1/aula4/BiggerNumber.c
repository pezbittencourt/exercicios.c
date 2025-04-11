#include <stdio.h>
#include <math.h>

int main() { 

int n1, n2;
printf("digite dois numeros e irei dizer qual é maior");
scanf("%d", &n1);
scanf("%d", &n2);

if (n1>n2) { 
    printf("%d é maior que %d", n1, n2);
} else { 
    printf("%d é maior que %d", n2, n1);
}



}