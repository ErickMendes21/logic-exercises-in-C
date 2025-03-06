#include <stdio.h>
 
int main() {
    int N, menor = 10000000, a;
    scanf("%d", &N);
    int X[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &X[N]);
        if(X[N] < menor){
            menor = X[N];
            a = i;
        }
        
    }
    
    printf("Menor valor: %d\nPosicao: %d\n", menor, a);
    
 
    return 0;
}