#include <stdio.h>

int main() {
    int numero, maior = 0;
   
    for (int i = 0; i < 5; i++) {
        printf("Escreva %d numero: ", i + 1);
        scanf("%d", &numero);
       
        if (numero > maior) {
            maior = numero;
        }
    } 
   
    if (maior == 0) {
        printf("Nenhum número foi inserido ou todos os números eram não-positivos.\n");
    } else {
        printf("O maior número inserido foi: %d\n", maior);
    }

    return 0;
}

