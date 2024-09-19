#include <stdio.h>

int main()
{
    int mat[3][6] = {1,2,3,4,5,6, 
                     7,8,9,10,11,12,            
                     13,14,15,16,17,18};
    int l = 1, c = 2;
    int soma;
        for(l = 0; l < 3; l++){
            for(c = 0; c < 6; c++){
                soma += mat[l][c];
              
            }
            printf("A soma e:%d", soma);
             printf("\n");
        }
             for(l = 0; l < 3; l++){
                for(c = 0; c < 6; c++){
            }


}
}