#include <stdio.h>
#include <string.h>

/*
    1- Escreva um algoritmo em C para fazer a autenticação de usuários em um sistema. Para
    isso, leia login e senha do usuário. O sistema deve ter as seguintes funcionalidades

        1. Pedir login e senha do usuário.
        2. Verificar se é uma senha válida*
        3. Verificar se o login e senha estão corretos.**
        4. Informar o resultado ao usuário.

    Observações

    *Uma senha válida precisa ter pelo menos 6 caracteres.

    **Você mesmo pode definir o login e senha correto.
*/

/*
    Verifica se uma senha é valida ( > 6 caracteres )

    Retorno:

    0 : Senha inválida
    1 : Senha válida
*/
int isPasswordValid(char password[]);

/*
    Verifica se as credenciais informadas estão corretas

    Retorno:

    0 : Credenciais inválidas
    1 : Credenciais válidas
*/
int isCredentialsValid(char password[], char login[]); 

int main(){
    

    char password[20];
    char login[20];

    printf("LOGIN: ");
    gets(login);
    printf("PASSWORD: ");
    gets(password);

    if( ! isPasswordValid(password) ){
        puts("\n\nSua senha precisa ter mais que 6 letras :(\n");
        return 0;
    }

    if( ! isCredentialsValid(password, login) ){
        puts("\n\nSenha ou login invalido =(\n");
        return 0;
    }

    printf("\n\nLogin efetuado com sucesso !\n\n");
    return 0;
}


int isPasswordValid(char password[]){
    if( strlen(password) > 6 )
        return 1;
    else
        return 0;
}

int isCredentialsValid(char password[], char login[]){
    // credenciais validas
    char userPassword[] =  "senhatop";
    char userLogin[]    =  "login";

    if( strcmp(userLogin, login) == 0 && strcmp(userPassword, password) == 0)
        return 1;
    else 
        return 0;
}