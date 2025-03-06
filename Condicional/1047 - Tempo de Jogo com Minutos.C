#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int HI, MI, HF, MF, X, Y;
    scanf("%d%d%d%d", &HI, &MI, &HF, &MF);
    if(HF > HI && MI > MF){
        X = HF - HI;
        X = X - 1;
        Y = MI - MF;
        Y = Y - 60;
        Y = abs(Y);
        X = abs(X);
    }
    if(HF > HI && MF > MI){
        X = HF - HI;
        Y = MF - MI;
        Y = abs(Y);
        X = abs(X);
    }
    if(HI > HF && MI > MF){
        X = HI - HF;
        X = X - 24;
        X = abs(X) - 1;
        //AAAA
        Y = MI - MF;
        Y = Y - 60;
    }
    if(HI > HF && MF > MI){
        X = HI - HF;
        X = X - 24;
        Y = MF - MI;
    }
    if(HI == HF && MI == MF){
        X = HI - HF;
        X = X - 24;
        X = abs(X);
        Y = MI - MF;
    }
    if(HI == HF && MI > MF){
        X = HI - HF;
        X = X - 24;
        X = abs(X) - 1;
        X = abs(X);
        Y = MI - MF;
        Y = Y - 60;
        Y = abs(Y);
    }
    if(HI == HF && MF > MI){
        X = HI - HF;
        X = abs(X);
        Y = MI - MF;
        Y = abs(Y);
    }
    if(HI > HF && MI == MF){
        X = HI - HF;
        X = X - 24;
        X = abs(X);
        Y = MI - MF;
    }
    if(HF > HI && MI == MF){
        X = HI - HF;
        X = abs(X);
        Y = MI - MF;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", abs(X), abs(Y));
    return 0;
}