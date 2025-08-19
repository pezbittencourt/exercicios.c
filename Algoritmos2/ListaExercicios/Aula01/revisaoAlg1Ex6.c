//mostrar os primeiros 15 termos da série de Fibonacci utilizando vetores
#include <stdio.h>


int main () {
int fibonacci[15];

for (int i =0; i<15; i++) {

    if (i == 0) {
        fibonacci[i] = 0;
        } else if (i == 1) {
            fibonacci[i] = 1;
        } else {
            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
                }
    printf("%d\n", fibonacci[i]);

}
    return 0;
}

