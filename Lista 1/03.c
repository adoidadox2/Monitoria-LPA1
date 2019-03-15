#include <stdio.h>

int main(int argc, char *argv[]){
   
   int idade,tempo;
   char tatuagem;
   
   printf("Insira sua idade: ");
   scanf("%d",&idade);
   
   if(idade>=18 && idade<=67){
        printf("Possui tatuagem[s/n]: ");
        fflush(stdin);
        scanf("%c",&tatuagem);
        
        if(tatuagem=='s'){
             printf("A quanto tempo foi feita(resposta em meses): ");
             scanf("%d",&tempo);
             
             if(tempo>=12){
                   printf("Voce pode doar!\n");
                           }
             else if(tempo<12){
                  printf("Voce nao pode doar\n");
                           }
             }
        else if(tatuagem=='n'){
             printf("Voce pode doar!\n");
             }
   }
   else{
        printf("Voce nao pode doar sangue\n");
   }
   
    system("pause");
    return 0;
}
