/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char nome[50];
    float n1, n2, n3, media;
    
    scanf("%s", nome);
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    
    media = (n1 + n2 + n3) /3;
    
    
    if(media >= 7){
        printf("O aluno: %s\n", nome);
        printf("foi Aprovado: %3.f\n", media);
    }
    
    else if(media <= 5){
        printf("O aluno: %s\n", nome);
        printf("foi reprovado: %3.f\n", media);
        
    } 
   
    else{
        printf("O aluno: %s\n", nome);
        printf("ficou em Recuperação: %3.f\n", media);
    }
    
    
    
    
 
}
