#include <stdio.h>
 
int main() {
    int N, X, j = 0, k = 0;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        scanf("%d", &X);
        if(X >= 10 && X <= 20){
            j++;
        }else{
            k++;
        }
    }
    
    printf("%d in\n", j);
    printf("%d out\n", k);
 
    return 0;
}