// Faça uma função que recebe um array de inteiros e retorna qual o maior valor
//do array


int maiorValor (int array [], int tamanho) {
    
int maior = array[0];

for (int i = 1; i < tamanho; i++){

    if (array[i] > maior) {
        maior = array[i];
    }
}
return maior;
}

int main () {
    int numeros[] = {10, 50, 55, 93,99,18};
    int tamanho = sizeof (numeros) / sizeof(numeros[0]);

int maior = maiorValor(numeros, tamanho);

printf("o maior valor da array é: %d\n", maior);

return 0;
}