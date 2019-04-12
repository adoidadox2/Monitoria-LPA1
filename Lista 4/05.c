#include <stdio.h>
int main(void){

    int A[5];
    int B[8];

    for(int x = 0; x < 5; x++){
        printf(" Digite o valor da posicao A[%d]: ", x);
        scanf("%d", &A[x]);
    }
    printf("\n\n");
    for(int x = 0; x < 8; x++){
        printf(" Digite o valor da posicao B[%d]: ", x);
        scanf("%d", &B[x]);
    }
    printf("\n\n");
    printf(" O(s) numero(s) que estao no vetor A e B simultaneamente sao/e: ");
    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 8; y++){
            if(A[x] == B[y]){
                printf(" %d ", A[x]);
                break;
            }
        }
    }
    printf("\n\n");
    return 0;
}