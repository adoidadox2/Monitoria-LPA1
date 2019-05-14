#include <stdio.h>


#define USERS 10
#define SCORE_QUESTION 2

// Perguntas

/*
    As funções retornam 1 ou 0
    1 = Acerto
    0 = Erro
*/
int favoriteFood();
int favoriteJuice();
int favoritePet();
int favoriteCountry();
int myAge();

char response;
int score = 0, scores[5];

int main(){
    
    for(int i = 0; i < 5; i++){
        scores[i] = 0;
    }

    for(int i = 0; i < USERS; i++){
        score = favoriteCountry() + favoriteFood() + favoriteJuice() + favoritePet() + myAge();
        
        if(i < 5)
            scores[i] = score;
        else{
            for(int i = 0; i < 5; i++){
                if(scores[i] < score){
                    scores[i] = score;
                }
            }
        }

        printf("\n\nYour score: %d\n\n", score);
    }

    printf("Best scores\n\n");
    for(int i = 0; i < 5; i++){
        printf("%d) %d\n", i + 1, scores[i]);
    }
}


// Implementação das funções

int favoriteCountry(){
    printf("\n\n\nHey, what is my favorite country ?\n\n");
    printf("  a) Canada\n");
    printf("  b) EUA\n");
    printf("  c) Ireland\n");
    printf("  d) Germany\n");
    fflush(stdin);    
    scanf("%c", &response);
    if( response == 'A' || response == 'a' ){
        printf("\n\nYeeesss, you won %d points =)", SCORE_QUESTION);
        return SCORE_QUESTION;
    }else{
        printf("\n\nOh nooo !");
        return 0;
    }
}

int favoriteJuice(){
    printf("\n\n\nHou, what is my favorite juice ?\n\n");
    printf("  a) Pineapple\n");
    printf("  b) Pineapple with mint\n");
    printf("  c) Strawberry\n");
    printf("  d) Cashew\n");
    fflush(stdin);    
    scanf("%c", &response);
    if( response == 'B' || response == 'b' ){
        printf("\n\nYeeesss, you won %d points =)", SCORE_QUESTION);
        return SCORE_QUESTION;
    }else{
        printf("\n\nOh nooo !");
        return 0;
    }
}

int favoriteFood(){
    printf("\n\n\nHi, what is my favorite food ?\n\n");
    printf("  a) Yakisoba\n");
    printf("  b) Strogonoff\n");
    printf("  c) Pasta\n");
    printf("  d) Pizza\n");
    fflush(stdin);    
    scanf("%c", &response);
    if( response == 'B' || response == 'b' ){
        printf("\n\nYeeesss, you won %d points =)", SCORE_QUESTION);
        return SCORE_QUESTION;
    }else{
        printf("\n\nOh nooo !");
        return 0;
    }
}

int favoritePet(){
    printf("\n\n\nHelou, what is my favorite pet ?\n\n");
    printf("  a) Bird\n");
    printf("  b) Dog\n");
    printf("  c) Hamster\n");
    printf("  d) Cat\n");
    fflush(stdin);    
    scanf("%c", &response);
    if( response == 'D' || response == 'd' ){
        printf("\n\nYeeesss, you won %d points =)", SCORE_QUESTION);
        return SCORE_QUESTION;
    }else{
        printf("\n\nOh nooo !");
        return 0;
    }
}

int myAge(){
    printf("\n\n\nDa o laudo, what is my age ?\n\n");
    printf("  a) 18\n");
    printf("  b) 21\n");
    printf("  c) 20\n");
    printf("  d) 22\n");
    fflush(stdin);    
    scanf("%c", &response);
    if( response == 'C' || response == 'c' ){
        printf("\n\nYeeesss, you won %d points =)", SCORE_QUESTION);
        return SCORE_QUESTION;
    }else{
        printf("\n\nOh nooo !");
        return 0;
    }
}