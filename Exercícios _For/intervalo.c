#include <stdio.h>

int main()
{
    int numeros, dentro = 0, fora = 0;
    
    for (int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &numeros);
        
        if (numeros >= 10 && numeros <= 20) {
            dentro++;
        } else {
            fora++;
        }
    }

    printf("%d dentro do intervalo [10, 20]\n", dentro);
    printf("%d fora do intervalo [10, 20]\n", fora);

    return 0;
}
