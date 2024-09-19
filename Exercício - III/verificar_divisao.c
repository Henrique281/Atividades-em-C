/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite qualquer numero:\n");
    scanf("%d", &num);
    
    if(num / 4 && num / 5 ){
        printf("este numero e divisivel por 4 e 5.");
    }
    
    else{
         printf("este numero não e divisivel por 4 e 5.");
        
    }


}
