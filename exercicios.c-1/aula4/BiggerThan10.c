#include <stdio.h>
#include <math.h>

int main() { 
int num;

printf ("insira um valor, caso ele seja maior que 10 eu irei responder \"sim\" ");
scanf("%d", &num);

if (num>10){ 
    printf("Sim!");
}   else { 
    return 0;
}

}