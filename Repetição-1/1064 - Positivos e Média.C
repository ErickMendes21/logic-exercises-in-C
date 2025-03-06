#include <stdio.h>
 
int main() {
    int  S =0;
    float V, X = 0, Y;
    for(int i = 1; i <= 6; i++){
        scanf("%f", &V);
        if(V > 0){
            S++;
            X += V;
            Y = X/S;
        }
    }
    printf("%d valores positivos\n", S);
    printf("%.1f\n", Y);
    return 0;
}