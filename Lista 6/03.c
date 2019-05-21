#include <stdio.h>
#include <string.h>


// 3- Leia o nome de 10 pessoas e conte quantas iniciam com a letra A ou a.

int main(){
    char names[10][20];

    int counter = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um nome: ");
        gets(names[i]);
        
        if( names[i][0]  ==  'a' || names[i][0] == 'A' )
            counter++;
    }

    printf("\n\n%d nomes iniciam com a letra A =)\n\n", counter);
}