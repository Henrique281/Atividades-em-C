#include <stdio.h>

int calculaTabuada(int number, int multiplicador) {
    return number * multiplicador;
}

int main() {
    int n;

    printf("Digite um numero para calcular a tabuada: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        int resultado = calculaTabuada(n, i);
        printf("%d x %d = %d\n", n, i, resultado);
    }

    return 0;
}
