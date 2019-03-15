#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    float x = 0, y = 0;

    // Lendo os valores de X e Y
    printf("Digite o valor do eixo X: ");
    scanf("%f", &x);

    printf("Digite o valor do eixo Y: ");
    scanf("%f", &y);

    // Quando o ponto está na origem
    if( x == 0 && y == 0 ){
        printf("Origem\n");
    }

    // Quando o ponto está do Quadrante 1
    if( x > 0 && y > 0 ){
        printf("Q1\n");
    }

    // Quando o ponto está no Quadrante 2
    if( x < 0 && y > 0 ){
        printf("Q2\n");
    }

    // Quando o ponto está no Quadrante 3
    if( x < 0 && y < 0 ){
        printf("Q3\n");
    }

    // Quando o ponto está no Quadrante 4
    if( x > 0 && y < 0 ){
        printf("Q4\n");
    }

    system("pause");
    return 0;
}