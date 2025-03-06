#include <stdio.h>
 
int main() {
    int N, X;
    scanf("%d", &N);
    for(int i = 1; i <= 10000; i++){
        X = i % N;
        if(X == 2){
            printf("%d\n", i);
        }
        
    }
    
    return 0;
}