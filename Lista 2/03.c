#include <stdio.h>

// Necessário apenas se não for compilar no dev
#include <stdlib.h>


/*
	 Fazer um programa em C que leia 10 números, e imprima a soma do maior e do menor número.
*/

int main(){
	
	int maiorNumero, menorNumero, numero, c = 0; 
	
	printf("Informe um numero: ");
	scanf("%d", &numero);

	maiorNumero = numero;
	menorNumero = numero;

	while(c < 9){
		printf("Informe um numero: ");
		scanf("%d", &numero);
		
		if(numero > maiorNumero)
			maiorNumero = numero;
		
		if( numero < menorNumero || menorNumero == -1)
			menorNumero = numero;	

		c++;
	}
	
	printf("Maior numero: %d\n", maiorNumero);
	printf("Menor numero: %d\n", menorNumero);
	printf("Soma: %d\n", maiorNumero+ menorNumero);


    // Necessário apenas se não for compilar no dev
    system("pause");
	return 0;
}