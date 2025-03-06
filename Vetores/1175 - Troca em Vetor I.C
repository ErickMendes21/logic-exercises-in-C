#include <stdio.h>
 
int main() {
    int N[20], aux[20], a = 0, i, j;
    for(int i = 0; i < 20; i++){
        scanf("%d", &N[i]);
        aux[i] = N[i];
    }
    
    for(i = 19, j = 0; i >= 0, j < 20; i--, j++){
        N[j] = aux[i];
    }
    
    for(j = 0; j < 20; j++){
        printf("N[%d] = %d\n", a++, N[j]);
    }
 
    return 0;
}