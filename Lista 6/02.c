#include <stdio.h>

/*
    2- Implementar a função strlen() que retorna a quantidade de caracteres de uma
    determinada string.
*/


/*
    Retorna a quantidade de caracteres contidos em uma string.
*/

int strlen(char string[]);

int main(){
    char string[] = "Mateus Henrique";

    printf("\n\n%s possui %d caracteres =) \n\n", string, strlen(string));
}

int strlen(char string[]){
    int len = 0;

    for(int i = 0; string[i] != '\0'; i++)
        len++;

    return len;
}