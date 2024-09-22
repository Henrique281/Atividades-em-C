#include <stdio.h>

int calculaFibonacci(int n) {
    if (n <= 0) {
        return -1;
    } else if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        int a = 0, b = 1, c;
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int main() {
    int n;

    printf("Digite o valor de n para calcular o n-esimo numero na sequencia de Fibonacci: ");
    scanf("%d", &n);

    int result = calculaFibonacci(n);

    if (result == -1) {
        printf("Informe um numero valido (maior que 0).\n");
    } else {
        printf("O %d-esimo número na sequencia de Fibonacci é: %d\n", n, result);
    }
}