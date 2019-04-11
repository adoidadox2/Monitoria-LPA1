#include<stdio.h>
#include<stdlib.h>

int main(int argc, **argv[]){
    
int num[10]={1,2,3,4,5,6,7,8,9,10},aux,i;

for(i=0;i<5;i++){
      aux=num[9-i];
      num[9-i]=num[i];
      num[i]=aux;
      }
      
for(i=0;i<10;i++){
      printf("%d\n",num[i]);
      }
      
system("pause");
return 0;       
}
