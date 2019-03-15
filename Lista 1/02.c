#include <stdio.h>

int main(int argc, char *argv[]){
    float nota1, nota2, nota3, media;

    printf(" Digite suas 3 notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if(media >= 9){
        printf(" %.2f A\n", media);
    }else if(media >= 7.5){
        printf(" %.2f B\n", media);
    }else if(media >= 6){
        printf(" %.2f C\n", media);
    }else if(media >= 4){
        printf(" %.2f D\n", media);
    }else{
        printf(" %.2f E\n", media);
    }

    return 0;
}