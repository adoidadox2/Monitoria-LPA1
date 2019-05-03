#include <stdio.h>

// 1 - Leia um vetor contendo 10 números, que correspondem a matrículas de
// alunos. Após isso ler uma matrícula e imprima uma mensagem informando se
// está ou não presente no vetor, caso o número esteja, mostre a posição onde foi
// encontrado o número.

int matriculas[10], matricula, posicao = -1;

void lerMatriculas();
void imprimirMatriculas();
void lerMatricula();
int procurar();

int main(){
    lerMatriculas();
    lerMatricula();
    if(procurar())
        printf("Matricula encontrada na posicao %d\n", posicao);
    else
        printf("Matricula nao encontrada\n");
}


void lerMatriculas(){
    for(int i = 0; i < 10; i++){
        printf("Informe o numero da matricula %d: ", i + 1);
        scanf("%d", &matriculas[i]);
    }
}

void lerMatricula(){
    printf("Informe o numero da matricula: ");
    scanf("%d", &matricula);
}

void imprimirMatriculas(){
    for(int i = 0; i < 10; i++){
        printf("Matricula na posicao matriculas[%d] = %d\n", i, matriculas[i]);
    }
}

int procurar(){
    for(int i = 0; i < 10; i++){
        if( matricula == matriculas[i] ){
            posicao = i;
            return 1;
        }
    }
    return 0;
}