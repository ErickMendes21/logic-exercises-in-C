#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
    int V[10] = { N };
    for(int i = 0; i < 10; i++){
        if(i > 0){
            V[i] = V[i - 1] * 2;
        }
    }
    
    for(int i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, V[i]);
    }
 
    return 0;
}