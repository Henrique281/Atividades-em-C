#include <stdio.h>

int calculaPotencia(int base, int expoente) {
    int resultado = 1;

    if (expoente < 0) {
        printf("Erro\n");
        return -1;
    }

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    int resultado = calculaPotencia(base, expoente);

    if (resultado != -1) {
        printf("%d elevado a %d e igual a %d\n", base, expoente, resultado);
    }

    return 0;
}