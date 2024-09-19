#include <stdio.h>

int main() {
    double base, resultado = 1.0;
    int expoente;

    printf("Digite a base: ");
    scanf("%lf", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if (expoente >= 0) {
        for (int i = 0; i < expoente; i++) {
            resultado *= base;
        }
    } else {
        for (int i = 0; i > expoente; i--) {
            resultado /= base;
        }
    }

    printf("O resultado é: %.2lf\n", resultado);

    return 0;
}
