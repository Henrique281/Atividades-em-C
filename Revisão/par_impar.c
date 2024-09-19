#include <stdio.h>

int main()
{
    int n = 0;
    
    printf("Digite um numero:\n");
    scanf("%d", &n);
    
    if (n % 2==0){
    printf("%d e numero par\n", n);
    
    }else{
    printf("%d e impar\n", n);
    }

    
}
