#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero1,numero2,resultado=0,contador;
    
    printf("Insira um numero: ");
    scanf("%d",&numero1);
    printf("Insira outro numero: ");
    scanf("%d",&numero2);
    
    
    for(contador=0;contador<numero2;contador++){
          resultado+=numero1;                                      
    }
    
    
    printf("Resultado da multiplicacao: %d\n",resultado);
    system("pause");
    return 0;
}
