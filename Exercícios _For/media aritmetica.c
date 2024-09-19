#include <stdio.h>

int main()
{
    int notas, soma = 0;
    float media;
    
    for(int i = 0; i < 15; i++){
        printf("Digite a %d nota:\n", i + 1 );
        scanf("%d", &notas);
        soma += notas;
    }

    media =  (float)soma / 15;
    printf("A media e: %.2f", media);
}
