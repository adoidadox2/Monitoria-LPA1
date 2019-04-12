#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero,contador,divisivel=0;
    
    printf("Insira um numero e descubra se e primo: ");
    scanf("%d",&numero);
    
    
    for(contador=1;contador<=numero;contador++){
          if(numero%contador==0){
                divisivel++;
               }
    }
    
    if(divisivel==2){
         printf("Numero primo\n");
    }
    else{
         printf("Numero nao e primo\n");
         }

    system("pause");
    return 0;
}
