#include <stdio.h>

int main() {
    int A, B, C, Maior;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    // Encontra o maior valor entre A, B e C
    Maior = A;
    if (B > Maior) {
        Maior = B;
    }
    else if (C > Maior) {
        Maior = C;
    }

    printf("%d eh o maior\n", Maior);

    return 0;
}