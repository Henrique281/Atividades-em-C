#include <stdio.h>

int main() {
    int n = 0, contador = 0; // Inicialize o contador com 0
    
    printf("Digite um número positivo: ");
    scanf("%d", &n);
    
    while (contador <= n) {
        if (contador % 2 == 0) { // Verifica se o contador é par
            printf("%d ", contador);
        }
        contador++; // Incrementa o contador em 1 após cada iteração
    }
    
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
