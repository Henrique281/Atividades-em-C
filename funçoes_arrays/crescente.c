#include <stdio.h>

void ordenarArray(int arr[], int tamanho) {
    int trocado;
    do {
        trocado = 0;
        for (int i = 1; i < tamanho; i++) {
            if (arr[i - 1] > arr[i]) {
                int temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
                trocado = 1;
            }
        }
    } while (trocado);
}

int main() {
    int numeros[] = {5, 2, 8, 1, 9, 4};
    int tamanho = 6;

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    ordenarArray(numeros, tamanho);

    printf("\nArray ordenado em ordem crescente: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}