/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    
    int idade, idade_nova;
    
    printf("insira a sua idade:\n");
    scanf("%d", &idade);
    
    idade_nova = idade + 1;
    
    printf("No ano que vem voce tera: \n%d anos.\n", idade_nova);

    return 0;
}
