#include <stdio.h>

int verificar(int n1, int n2) {
    if (n1 > n2) {
        return n2;
    } else {
        return n1;
    }
}

int main() {
    int valor1 = 6;
    int valor2 = 10;

    int resultado = verificar(valor1, valor2);

    printf("O menor numero e: %d", resultado);

    return 0;
}
