#include <stdio.h>
 
int main() {
    int N, a = 0, b = 1, aux;
    scanf("%d", &N);
    printf("%d %d", a, b);
    for(int i = 1; i <= N - 2; i++){
        aux = a + b;
        a = b;
        b = aux;
        printf(" %d", b);
    }
    printf("\n");
    return 0;
}