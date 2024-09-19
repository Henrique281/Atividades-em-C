/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1, n2, dif;
    
    scanf("%d %d", &n1, &n2);
    
    if(n1 > n2){
        
        dif = n1 - n2;
         }

     else{
        dif = n2 - n1;
      

}

    printf("A diferença entre o maior e o menor número é: %d\n", dif);


}
