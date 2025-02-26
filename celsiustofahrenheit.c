#include <stdio.h>
int main()
{
//*faça um programa que receba um valor em Celsius e transforme-o em Fahrenheit//*



printf("qual o valor em celsius?\n");
float c;
scanf("%f", &c);
float f=(c*1.8)+32;
printf("tal temperatura em Fahrenheit será de %.2f", f);


    return 0;
}
