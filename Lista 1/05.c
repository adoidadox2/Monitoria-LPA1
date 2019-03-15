#include <stdio.h>

int main(int argc, char *argv[]){
    int x, y, aux;
    
    scanf("%d", &x);
    scanf("%d", &y);

    printf("x = %d y = %d\n", x, y);

    aux = x;
    x = y;
    y = aux;

    printf("x = %d y = %d\n", x, y);

    return 0;
}
