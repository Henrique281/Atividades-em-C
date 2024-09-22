#include <stdio.h>

int isPar(int numero) {
    return numero % 2 == 0;
}

int main()
{
    int x;
    printf("Digite um numero:");
    scanf("%d", &x);
    
    if(isPar(x)){
        printf("Verdadeiro\n");
    }else{
        printf("Falso\n");
    }
}
