#include <stdio.h>

int main() {
    int codigo, segcodigo, quantidade, segquantidade;
    double valor = 0, segvalor = 0, soma;

    printf("Digite o código do primeiro produto: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade do primeiro produto: ");
    scanf("%d", &quantidade);
    printf("Digite o valor unitário do primeiro produto: ");
    scanf("%lf", &valor);

    printf("Digite o código do segundo produto: ");
    scanf("%d", &segcodigo);
    printf("Digite a quantidade do segundo produto: ");
    scanf("%d", &segquantidade);
    printf("Digite o valor unitário do segundo produto: ");
    scanf("%lf", &segvalor);

    if (quantidade > 0 && segquantidade > 0) {
        double total = quantidade * valor;
        double segtotal = segquantidade * segvalor;
        soma = total + segtotal;
        printf("VALOR A PAGAR: R$ %.2lf\n", soma);
    } else {
        printf("A quantidade de produtos deve ser positiva.\n");
    }

    return 0;
}
