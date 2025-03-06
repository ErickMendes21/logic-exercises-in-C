#include <stdio.h>
 
int main() {
    int N, Hmax, Hmin, k = 0, T, i = 0;
    while(scanf("%d%d%d", &N, &Hmin, &Hmax) != EOF){
        for(int i = 1; i <= N; i++){
            scanf("%d", &T);
            if(T >= Hmin && T <= Hmax){
                k++;
            }
        }
        printf("%d\n", k);
        k = 0;
    }
 
    return 0;
}