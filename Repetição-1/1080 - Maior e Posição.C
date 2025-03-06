#include <stdio.h>

int main() {
    int V, M = 0, P = 0;
    for(int i = 1; i <= 100 ; i++){
        scanf("%d", &V);
        if(V > M){
            M = V;
            P = i;
        }
    }
    printf("%d\n", M);
    printf("%d\n", P);
    return 0;
}