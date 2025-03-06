#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int HI, HF, X;
    scanf("%d%d", &HI, &HF);
    if(HI == HF){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    if(HI == 0 && HF > 0 || HF > HI){
        HF = HF - HI;
        printf("O JOGO DUROU %d HORA(S)\n", HF);
    }
    if(HI > 0 && HF == 0 || HI > HF){
        HI = HI - HF;
        HI = HI - 24;
        printf("O JOGO DUROU %d HORA(S)\n", abs(HI));
    }
    
 
    return 0;
}