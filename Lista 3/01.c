#include <stdio.h>
#include <stdlib.h>
int main(){
    float deposito,valor_com_juros,lucro;
    int tempo,contador;
    const float juros=0.05;
    
    printf("Insira o Valor do Deposito: ");
    scanf("%f",&deposito);
    printf("Insira o numero de meses que o dinheiro ficara rendendo: ");
    scanf("%i",&tempo);
    
    valor_com_juros=deposito;
    
    for(contador=1;contador<=tempo;contador++){
          valor_com_juros+=valor_com_juros*juros;
          }
    lucro=valor_com_juros-deposito;
    
    printf("O lucro obtido em %i meses com o deposito de %.2f e de: %.2f\n",tempo,deposito,lucro);
    
    system("pause");
    return 0;
}
