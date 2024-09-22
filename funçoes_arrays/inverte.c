#include <stdio.h>

void inverterArray(int arr[], int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio < fim) {
        int temp = arr[inicio];
        arr[inicio] = arr[fim];
        arr[fim] = temp;

        inicio++;
        fim--;
    }
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tamanho = 5;

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    inverterArray(numeros, tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}