#include <stdio.h>
#include <stdlib.h>

int main(void){
    int numero, i, resultado = 1;

    printf("\n Digite o numero: ");
    scanf("%d", &numero);

    for(i = numero; i > 1; i--){
        resultado *= i;
    }

    printf("\n %d! = %d\n\n", numero, resultado);

    system("pause");
    return 0;
}