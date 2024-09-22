#include <stdio.h>

int encontrarSoma(int arr[], int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }

    return soma;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tamanho = 5;

    int resultado = encontrarSoma(numeros, tamanho);
    printf("A soma dos elementos do array e: %d\n", resultado);

    return 0;
}