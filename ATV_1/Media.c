/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){

    float A, B, MEDIA;
    
    scanf("%f", &A);
    scanf("%f", &B);
    
    
    MEDIA = ((A * 3.5) + (B * 7.5)) / 11;
    
    printf("MEDIA = %.5f", MEDIA);
    
    return 0;

}
