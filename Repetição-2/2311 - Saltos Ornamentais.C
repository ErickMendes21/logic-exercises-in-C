#include <stdio.h>

int main() {
    int N;
    char nome[20];
    double GD, notas, Maior = 0, Menor = 11, S = 0;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        scanf("%s%lf", nome, &GD);
        for(int j = 1; j <= 7; j++){
            scanf("%lf", &notas);
            if(notas > Maior){
                Maior = notas;
            }
            if(notas < Menor){
                Menor = notas;
            }
            S = S + notas;
        }
        S = S - Menor;
        S = S - Maior;
        S = S * GD;
        printf("%s %.2lf\n", nome, S);
        S = 0;
        Maior = 0;
        Menor = 11;
    }
    
    return 0;
}