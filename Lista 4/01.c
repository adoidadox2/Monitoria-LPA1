#include <stdio.h>
#include <stdlib.h>

void main(void){
    int matriculas[10], matricula, posicao, presente = 0;

    // Preenchendo o vetor de matriculas com os números informados pelo usuário
    for(int i = 0; i < 10; i++){
        printf("Informe o numero da matricula %d: ", i + 1);
        scanf("%d", &matriculas[i]);
    }

    printf("Informe o numero da matricula: ");
    scanf("%d", &matricula);
    
    for(int i = 0; i < 10; i++){
        if( matricula == matriculas[i] ){
            posicao = i;
            presente = 1;
            break;
        }
    }

    if(presente){
        printf("O numero esta na lista, na posicao %d !\n", posicao);
    }else{
        printf("O numero nao esta na lista !\n");
    }
    

    system("pause");
}