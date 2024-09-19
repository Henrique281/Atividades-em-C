#include <stdio.h>

int main()
{
    int idade, soma = 0, totalidades = 50;
    float media;
   
   for(int i = 0; i < totalidades; i++){
       scanf("%d", &idade);
       soma = soma + idade;
    
   }
   media = (float)soma / totalidades;
   printf("A mediade idades é:%3.f", media);
       
}
