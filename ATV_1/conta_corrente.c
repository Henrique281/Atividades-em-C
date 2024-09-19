#include <stdio.h>

int main() {
    int escolha;
    double saldo = 0, deposito, saque;

    while (1) { // Loop infinito
        printf("Saldo: %.2lf\n", saldo);
        printf("O que você quer fazer?\n1. Depositar\n2. Sacar\n3. Fazer Pix\n4. Visitar Loja\n5. Sair\n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Insira o valor do depósito: ");
                scanf("%lf", &deposito);
                saldo += deposito;
                printf("Novo saldo: %.2lf\n", saldo);
                break;
            case 2:
                printf("Insira o valor do saque: ");
                scanf("%lf", &saque);
                if (saque <= saldo) {
                    saldo -= saque;
                    printf("Novo saldo: %.2lf\n", saldo);
                } else {
                    printf("Saldo insuficiente.\n");
                }
                break;
            case 3:
                printf("Insira o valor do Pix: ");
                scanf("%lf", &saque);
                if (saque <= saldo) {
                    saldo -= saque;
                    printf("Novo saldo: %.2lf\n", saldo);
                } else {
                    printf("Saldo insuficiente.\n");
                }
                break;
            case 4:
                printf("https://www.mercadolivre.com.br/\n");
                break;
            case 5:
                return 0; // Encerra o programa se o usuário escolher a opção "Sair"
            default:
                printf("Escolha inválida\n");
        }
    }

    return 0;
}

