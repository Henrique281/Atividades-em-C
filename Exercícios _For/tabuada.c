#include <stdio.h>

int main(){
    int tabuada = 0;
    printf("Digite um numero para a tabuada entre 1 a 10:\n");
    scanf("%d",&tabuada);
    
    if(tabuada > 10){
        printf("Numero invalido\n");
    
        
    }else{
        for(int i = 1; i <= 10; i++) {
        printf("%d x %d: %d\n", tabuada, i, tabuada * i );
        
    
        }
    }
}
