#include <stdio.h>
 
int main() {
    int T, N[1000] = { 0 };
    scanf("%d", &T);
    for(int i = 0; i < 1000; i++){
        if(i % T == 0){
            N[i] = 0;
        }else{
            N[i] = N[i - 1] + 1;
        }
        printf("N[%d] = %d\n", i, N[i]);
    }
 
    return 0;
}