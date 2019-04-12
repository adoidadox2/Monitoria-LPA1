#include <stdio.h>
#include <stdlib.h>

// Faça um programa para criar dois vetores de 10 números inteiros, A e B. O programa deve preencher o vetor A com
// valores digitados pelo usuário. O vetor B deve ser preenchido da seguinte forma: os elementos de índice par são os correspondentes
// de A divididos por 2 e os elementos de índice ímpar são os correspondentes de A multiplicados por 3. Ao final, o programa deverá
// exibir os dois vetores (A e B).

void main(void){
    int a[10], b[10];

    // Preenchendo o vetor a com os números informados pelo usuário
    for(int i = 0; i < 10; i++){
        printf("Informe o valor do indice %d do vetor a[]: ", i);
        scanf("%d", &a[i]);
    }

    // Preenchendo o vetor b de acordo com os valores do vetor a
    for(int i = 0; i < 10; i++){
        // Verificando se o índice é um número par
        if(i % 2 == 0)
            // O valor de b no índice i vai ser igual a metade do valor do vetor a no índice i
            b[i] = a[i] / 2;
        else
            // O valor de b no índice i vai ser igual ao triplo do valor do vetar a no índice i
            b[i] = a[i] * 3;
    }


    // Mostrando os valores do vetor b
    for(int i = 0; i < 10; i++)
        printf("b[%d] = %d\n", i, b[i]);

    system("pause");
}