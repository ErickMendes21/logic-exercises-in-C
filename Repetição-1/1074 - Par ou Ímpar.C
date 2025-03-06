#include <stdio.h>
 
int main() {
    int N, X;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        scanf("%d", &X);
        if(X % 2 == 0 && X > 0){
            printf("EVEN POSITIVE\n");
        }
        if(X % 2 != 0 && X > 0){
            printf("ODD POSITIVE\n");
        }
        if(X % 2 == 0 && X < 0){
            printf("EVEN NEGATIVE\n");
        }
        if(X % 2 != 0 && X < 0){
            printf("ODD NEGATIVE\n");
        }
        if(X == 0){
            printf("NULL\n");
        }
    }
 
    return 0;
}