#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    int A[10],B[10],x;
    
    for(x=0;x<10;x++){
          printf("Insira o numero[%d]: ",x+1);
          scanf("%d",&A[x]);
          }
    
    for(x=0;x<10;x++){
          if(x%2==0){
               B[x]=A[x]/2;
                     }
          else{
               B[x]=A[x]*3;
               }            
          }
          
    printf("\n--- Vetor A ---\n\n");
    for(x=0;x<10;x++){
        printf("%d ",A[x]);
        }
        
    printf("\n\n--- Vetor B ---\n\n");
    for(x=0;x<10;x++){
        printf("%d ",B[x]);
        }
    printf("\n");
    
    system("pause");
    return 0;       
}
