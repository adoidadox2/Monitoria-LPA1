#include <stdio.h>
#include <stdlib.h>
/*
    Fazer um programa em C que peça um número inteiro e 
    imprima uma tabela com a tabuada deste número, 
    do menor para o maior e depois do maior para o menor.
*/
int main(int argc, char *argv[]){
    int numero,contador=1;
    
    printf("Insira um numero: ");
    scanf("%d",&numero);
    
    printf("\n--- CRESCENTE ---\n\n");
    while(contador<=numero){
         printf("%d x %d = %d\n",numero,contador,numero*contador);
         contador++;
    }
            
    contador = numero;
    
    printf("\n--- DECRESCENTE ---\n\n");      
    while(contador>0){
         printf("%d x %d = %d\n",numero,contador,numero*contador);
         contador--;
    }
    
    system("pause");    
    return 0;
}
