#include <stdio.h>

int main() {
    int n, somaDivisores = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O número não é um inteiro positivo.\n");
    } else {
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                somaDivisores += i;
            }
        }

        if (somaDivisores == n) {
            printf("%d é um número perfeito.\n", n);
        } else {
            printf("%d não é um número perfeito.\n", n);
        }
    }

    return 0;
}
