#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    float x1, x2, y1, y2, d;

    printf("Informe os pares ordenados (x, y) do ponto 1: ");
    scanf("%f %f", &x1, &y1);

    printf("Informe os pares ordenados (x, y) do ponto 2: ");
    scanf("%f %f", &x2, &y2);

    d = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

    printf("Distance: %.2f\n", d);

    system("pause");
    return 0;
}