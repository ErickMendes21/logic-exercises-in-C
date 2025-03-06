#include <stdio.h>
 
int main() {
    int N, j = 0, k = 0, A, B;
    float X, Y;
    while(scanf("%d", &N) != EOF){
        int V[N];
        Y = 2.0 / 3.0 * N;
        for(int i = 0; i < N; i++){
            scanf("%d", &V[i]);
            if(V[i] == 1){
                j++;
            }
        }
        if(j >= Y){
            printf("impeachment\n");
        }else{
            printf("acusacao arquivada\n");
        }
        j = 0;
    }
 
    return 0;
}