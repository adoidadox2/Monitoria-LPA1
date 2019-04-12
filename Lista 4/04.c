#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

int x=10,contador,y=2;

printf("Insira o X e Y: ");
scanf("%d",&x);
printf("Insira o Y: ");
scanf("%d",&y);

int vetor[x];

for(contador=1;contador<=x;contador++){
     vetor[contador-1]=y*contador;      
}

for(contador=0;contador<x;contador++){
      printf("%d\n",vetor[contador]);
      }

system("pause");
return 0;       
}
