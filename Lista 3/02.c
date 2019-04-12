#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero,contador,contador2;
    
    printf("Insira um numero: ");
    scanf("%d",&numero);
    
    if(numero%2==0){
           printf("ERRO!Insira um numero impar\n");
    }
    else{
        for(contador=0;contador<numero;contador++){
              for(contador2=contador+1;contador2<=numero;contador2++){
              printf("%d",contador2);
                    }   
                    numero--;
                    printf("\n"); 
                                     
        }
    } 
    
    system("pause");
    return 0;
}
