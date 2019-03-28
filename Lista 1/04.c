#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int dia, mes, ano;

    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);

    if(dia < 1 || dia > 31){
        printf("\n Data de nascimento invalida!\n O dia nao esta entre 1 e 31!\n\n");
    }else if(mes < 1 || mes > 12){
        printf("\n Data de nascimento invalida!\n O mes nao esta entre 1 e 12!\n\n");
    }else if(ano > 2019){
        printf("\n Data de nascimento invalida!\n O ano e maior que o ano atual (2019)!\n\n");
    }else{
        printf("\n Data de nascimento valida!\n\n");
    }

    system("pause");
    return 0;
}
