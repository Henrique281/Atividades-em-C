#include <stdio.h>

int main() {
    int codigo, quantidade;
    float valor_a_pagar;

    // Solicita ao usuário inserir o código e a quantidade do item
    printf("Insira o código do item e a quantidade: ");
    scanf("%d %d", &codigo, &quantidade);

    // Calcula o valor a pagar com base no código e quantidade
    switch (codigo) {
        case 1:
            valor_a_pagar = 4.00 * quantidade;
            break;
        case 2:
            valor_a_pagar = 4.50 * quantidade;
            break;
        case 3:
            valor_a_pagar = 5.00 * quantidade;
            break;
        case 4:
            valor_a_pagar = 2.00 * quantidade;
            break;
        case 5:
            valor_a_pagar = 1.50 * quantidade;
            break;
        default:
            printf("Código inválido.\n");
            return 1;
    }

    // Imprime o valor a pagar com 2 casas decimais
    printf("Total: R$ %.2f\n", valor_a_pagar);

    return 0;
}
