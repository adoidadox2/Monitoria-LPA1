#include <stdio.h>
int main(void){
    int vetor[10], soma = 0;

    for(int x = 0; x < 10; x++){
        printf("\n Digite o valor %d: ", x+1);
        scanf("%d", &vetor[x]);
        if(vetor[x] % 2 != 0){
            soma += vetor[x];
        }
       
    }

    printf("\n A soma dos numeros impares no vetor e %d\n", soma);



    return 0;
}