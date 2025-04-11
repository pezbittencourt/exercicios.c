#include <stdio.h>
#include <math.h>

int main() { 

int num;

printf("insira um numero e direi se ele é par ou impar");
scanf("%d", &num);

if (num%2==0) { 
    printf("par");
} else { 
    printf("impar");
}

return 0;
}