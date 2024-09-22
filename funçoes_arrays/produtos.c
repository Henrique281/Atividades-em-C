#include <stdio.h>

int calcularProduto(int arr[], int tamanho) {
    int produto = 1;

    for (int i = 0; i < tamanho; i++) {
        produto *= arr[i];
    }

    return produto;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tamanho = 5;

    int resultado = calcularProduto(numeros, tamanho);
    printf("O produto dos elementos do array e: %d\n", resultado);

    return 0;
}