#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float peso, altura, imc;

    printf("Informe o seu peso: ");
    scanf("%f", &peso);
    
    printf("Informe a sua altura: ");
    scanf("%f", &altura);

    // Calculando o imc
    imc = peso / ( altura * altura );

    printf("Seu IMC: %.2f\n", imc);
    printf("Sua classificacao: ");

    if( imc >= 18.5 && imc <= 24.99 ){
        printf("Peso normal\n");
    }else if( imc >= 25 && imc <= 29.99 ){
        printf("Acima do peso\n");
    }else if( imc >= 30 && imc <= 34.99 ){
        printf("Obesidade I");
    }else if( imc >= 35 && imc <= 39.99 ){
        printf("Obesidade II (Severa)\n");
    }

    system("pause");
    return 0;
}