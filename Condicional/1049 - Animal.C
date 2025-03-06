#include <stdio.h>
#include <string.h>
 
int main() {
    char animal1[20] = "vertebrado";
    char animal2[20] = "invertebrado";
    char animal3[20] = "ave";
    char animal4[20] = "mamifero";
    char animal5[20] = "inseto";
    char animal6[20] = "anelideo";
    char animal7[20] = "carnivoro";
    char animal8[20] = "onivoro";
    char animal9[20] = "herbivoro";
    char animal10[20] = "hematofago";
    
    char nome1[20], nome2[20], nome3[20];
    scanf("%s%s%s", nome1, nome2, nome3);
    if(strcmp(nome1, animal1) == 0){
        if(strcmp(nome2, animal3) == 0){
            if(strcmp(nome3, animal7) == 0){
                printf("aguia\n");
            }
            if(strcmp(nome3, animal8) == 0){
                printf("pomba\n");
            }
        }
        if(strcmp(nome2, animal4) == 0){
            if(strcmp(nome3, animal8) == 0){
                printf("homem\n");
            }
            if(strcmp(nome3, animal9) == 0){
                printf("vaca\n");
            }
        }
        
    }
    if(strcmp(nome1, animal2) == 0){
        if(strcmp(nome2, animal5) == 0){
            if(strcmp(nome3, animal10) == 0){
                printf("pulga\n");
            }
            if(strcmp(nome3, animal9) == 0){
                printf("lagarta\n");
            }
        }
        if(strcmp(nome2, animal6) == 0){
            if(strcmp(nome3, animal10) == 0){
                printf("sanguessuga\n");
            }
            if(strcmp(nome3, animal8) == 0){
                printf("minhoca\n");
            }
        }
        
    }
 
    return 0;
}