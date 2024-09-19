#include <stdio.h>

int main() {
    float soma, [5] = {4, 4.50, 5, 2, 1.50};
    int x, y;
    
    printf("1 Cachorro Quente R$ %.2f\n2 X-Salada R$ %.2f\n3 X-Bacon R$ %.2f\n4 Torrada simples R$ %.2f\n5 Refrigerante R$ %.2f\n", valores[0], valores[1], valores[2], valores[3], valores[4]);
    scanf("%d %d", &x, &y);
   
    if (x >= 1 && x <= 5 && y >= 1 && y <= 5) {
        soma = valores[x - 1] + valores[y - 1]; // Subtrai 1 para corresponder ao índice do vetor
        printf("Total: R$ %.2f\n", soma);
    } else {
        printf("Seleção inválida. Escolha números de 1 a 5.\n");
    }

    return 0;
}