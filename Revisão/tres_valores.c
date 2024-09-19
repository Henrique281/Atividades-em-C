#include <stdio.h>

int main() {
    double num1, num2, num3;

    while (1) {
        printf("Digite três valores em ordem crescente (ou digite qualquer valor para sair):\n");
        scanf("%lf %lf %lf", &num1, &num2, &num3);

        if (num1 >= num2 || num2 >= num3) {
            printf("Valores não estão em ordem crescente. Saindo do programa.\n");
            break;
        }

        double soma = num1 + num2 + num3;
        double produto = num1 * num2 * num3;
        double media = soma / 3.0;

        printf("Soma: %.2lf\n", soma);
        printf("Produto: %.2lf\n", produto);
        printf("Média: %.2lf\n", media);
    }

    return 0;
}
