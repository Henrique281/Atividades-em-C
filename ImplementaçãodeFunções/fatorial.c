#include <stdio.h>

int calculaFatorial(int number) {
    if (number < 0) {
        return -1;
    }

    int fatorial = 1;
    for (int i = 1; i <= number; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main() {
    int n;

    printf("Digite um numero (que nao seja negativo): ");
    scanf("%d", &n);

    int resultado = calculaFatorial(n);

    if (resultado == -1) {
        printf("O fatorial nao esta definido para numeros negativos.\n");
    } else {
        printf("O fatorial de %d e %d\n", n, resultado);
    }

    return 0;
}