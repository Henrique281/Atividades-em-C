/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    
    int ope;
    float n1, n2, res;
    
    printf("Digite 1 para somar;\n");
    printf("Digite 2 para subtrair;\n");
    printf("Digite 3 para multiplicar;\n");
    printf("Digite 4 para dividir:\n");
    scanf("%d", &ope);
    
    printf( "Digite o primeiro numero:\n");
    scanf("%f", &n1);
    printf( "Digite o segundo numero numero:\n");
    scanf("%f", &n2);
    
    
    if(ope == 1){
        res = n1 + n2;
        printf("resultado: %2.f.\n", res);
}
    
    if(ope == 2){
        res = n1 - n2;
        printf("resultado: %2.f.\n", res);
}
   
    if(ope == 3){
        res = n1 * n2;
        printf("resultado: %2.f.\n", res);
}
    
    if(ope == 4){
        res = n1 / n2;
        printf("resultado: %2.f.\n", res);
}

    
  
}


