#include<stdio.h>

int main(void) {
    printf("\e[1;1H\e[2J\b\n");

 printf("insira dois numeros e direi qual é o maior entre eles");
int n1;
int n2;
scanf("%d %d", &n1, &n2);
if (n1>n2){
    printf("o numero %d é maior que %d", n1, n2);
}
else if (n1==n2){
    printf("os numeros %d e %d são iguais", n1, n2);
}
else{
    printf("o numero %d é maior que %d", n2, n1);
}


    return 0;

    }