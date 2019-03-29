#include <stdio.h>
#include <stdlib.h>
/*
  Fazer um programa que calcula o fatorial de um número.
*/
int main(void){
    long long unsigned int resultado = 1;
    int numero, i;

    printf("\n Digite o numero: ");
    scanf("%d", &numero);

    i = numero;
    while( i > 1){
        resultado *= i;
        i--;
    }

    printf("\n %d! = %lld\n\n", numero, resultado);

    system("pause");
    return 0;
}
 
