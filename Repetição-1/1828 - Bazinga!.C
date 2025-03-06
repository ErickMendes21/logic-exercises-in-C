#include <stdio.h>
#include <string.h>
 
int main() {
    int N;
    scanf("%d", &N);
    char jogoS[20], jogoR[20];
    for(int i = 1; i <= N; i++){
        scanf("%s %s", jogoS, jogoR);
        //Raj ganha
        if(strcmp(jogoR, "tesoura") == 0 && strcmp(jogoS, "papel") == 0 || strcmp(jogoR, "papel") == 0 && strcmp(jogoS, "pedra") == 0 || strcmp(jogoR, "pedra") == 0 && strcmp(jogoS, "lagarto") == 0 || strcmp(jogoR, "lagarto") == 0 && strcmp(jogoS, "Spock") == 0|| strcmp(jogoR, "Spock") == 0 && strcmp(jogoS, "tesoura") == 0 || strcmp(jogoR, "tesoura") == 0 && strcmp(jogoS, "lagarto") == 0 || strcmp(jogoR, "lagarto") == 0 && strcmp(jogoS, "papel") == 0 || strcmp(jogoR, "papel") == 0 && strcmp(jogoS, "Spock") == 0 || strcmp(jogoR, "Spock") == 0 && strcmp(jogoS, "pedra") == 0 || strcmp(jogoR, "pedra") == 0 && strcmp(jogoS, "tesoura") == 0){
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
        else{
            //Sheldon ganha
            if(strcmp(jogoS, "tesoura") == 0 && strcmp(jogoR, "papel") == 0 || strcmp(jogoS, "papel") == 0 && strcmp(jogoR, "pedra") == 0 || strcmp(jogoS, "pedra") == 0 && strcmp(jogoR, "lagarto") == 0 || strcmp(jogoS, "lagarto") == 0 && strcmp(jogoR, "Spock") == 0|| strcmp(jogoS, "Spock") == 0 && strcmp(jogoR, "tesoura") == 0 || strcmp(jogoS, "tesoura") == 0 && strcmp(jogoR, "lagarto") == 0 || strcmp(jogoS, "lagarto") == 0 && strcmp(jogoR, "papel") == 0 || strcmp(jogoS, "papel") == 0 && strcmp(jogoR, "Spock") == 0 || strcmp(jogoS, "Spock") == 0 && strcmp(jogoR, "pedra") == 0 || strcmp(jogoS, "pedra") == 0 && strcmp(jogoR, "tesoura") == 0){
                printf("Caso #%d: Bazinga!\n", i);
            }
        }
        
        
        //Empate
        if(strcmp(jogoS, "tesoura") == 0 && strcmp(jogoR, "tesoura") == 0 || strcmp(jogoS, "papel") == 0 && strcmp(jogoR, "papel") == 0 || strcmp(jogoS, "pedra") == 0 && strcmp(jogoR, "pedra") == 0 || strcmp(jogoS, "lagarto") == 0 && strcmp(jogoR, "lagarto") == 0|| strcmp(jogoS, "Spock") == 0 && strcmp(jogoR, "Spock") == 0){
            printf("Caso #%d: De novo!\n", i);
        }
    }   
 
    return 0;
}