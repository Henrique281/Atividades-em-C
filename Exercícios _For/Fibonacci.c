#include <stdio.h>

int main() {
    int n, i;
    unsigned long long int termo1 = 0, termo2 = 1, proximoTermo;

    printf("Digite o valor de n para gerar a série de Fibonacci: ");
    scanf("%d", &n);

    printf("Série de Fibonacci até o %d-ésimo termo:\n", n);

    if (n >= 1) {
        printf("1 ");
    }

    for (i = 2; i <= n; i++) {
        proximoTermo = termo1 + termo2;
        printf("%llu ", proximoTermo);
        termo1 = termo2;
        termo2 = proximoTermo;
    }

    printf("\n");

    return 0;
}
