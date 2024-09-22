#include <stdio.h>

int somaPares(int n) {
    int soma = 0;
    
    for (int i = 2; i <= n; i += 2) {
        soma += i;
    }
    
    return soma;
}

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 1) {
        printf("O numero deve ser positivo.\n");
    } else {
        int resultado = somaPares(numero);
        printf("A soma dos numeros pares de 1 a %d e %d\n", numero, resultado);
    }

    return 0;
}
