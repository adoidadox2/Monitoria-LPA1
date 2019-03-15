#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float fahrenheit,celsius;

    printf("Insira o Valor em Celsius: ");
    scanf("%f",&celsius);
    
    fahrenheit=((celsius/5)*9)+32;
    
    printf("Valor convertido em Fahrenheit: %.2f\n",fahrenheit);
    
    system("pause");
    return 0;
}
