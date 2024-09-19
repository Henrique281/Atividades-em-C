#include <stdio.h>

int main()
{
    int numeros, pares = 0, impares = 0;
   
   for(int i = 0; i < 10 ; i++){
        printf("Digite o %d numero:", i + 1);
        scanf("%d", &numeros);
       
        if (numeros % 2 == 0) {
            pares++;
        }
        
        else{
        impares++;
            
        }
      
    
   }
        printf("Numeros pares:%d\n", pares);
        printf("Numeros impares:%d\n", impares);
   
       
}
