#include <stdio.h>
#include <stdlib.h>

/*
  Fazer um programa que calcula o fatorial de um número.

  Respondido sem laço de repetição õ/
*/

long long unsigned int fatorial(int n);

int main(){

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("O fatorial de %d eh: %lld\n", n, fatorial(n));

    system("pause");
    return 0;
}

long long unsigned int fatorial(int n){
    if(n == 0)
        return 1;
    else
        return n * fatorial(n - 1);
}