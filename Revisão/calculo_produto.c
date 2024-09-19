#include <stdio.h>

int main() {
    double numero, produto = 1.0;

    printf("Digite uma sequência de números (0 para encerrar):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%lf", &numero);

        if (numero == 0) {
            break;
        }

        produto *= numero;
    }

    printf("O produto dos números digitados é: %lf\n", produto);

    return 0;
}
