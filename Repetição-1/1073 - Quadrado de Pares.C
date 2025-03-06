#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
    for(int i = 2; i <= N; i = i + 2){
        if(N % 2 == 0 || N % 2 != 0){
            int X = i * i;
            printf("%d^2 = %d\n", i, X);
        }
    }
 
    return 0;
}