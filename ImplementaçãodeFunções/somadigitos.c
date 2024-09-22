#include <stdio.h>

int somaDigitos(int n) {
    int soma = 0;
    
    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }
    
    return soma;
}

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O numero deve ser positivo.\n");
    } else {
        int resultado = somaDigitos(numero);
        printf("A soma dos digitos de %d e %d\n", numero, resultado);
    }

    return 0;
}