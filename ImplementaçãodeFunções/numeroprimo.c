#include <stdio.h>

int verifiqueprimo(int number) {
    if (number <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n;

    printf("Digite um numero para verificar se ele e primo: ");
    scanf("%d", &n);

    if (verifiqueprimo(n)) {
        printf("Verdadeiro\n");
    } else {
        printf("Falso\n");
    }

    return 0;
}