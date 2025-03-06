#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= 10; i++){
        int X = i * N;
        printf("%d x %d = %d\n", i, N, X);
    }
 
    return 0;
}