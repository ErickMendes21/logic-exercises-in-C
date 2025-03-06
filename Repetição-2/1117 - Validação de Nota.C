#include <stdio.h>
 
int main() {
    int A = 1;
    double N, X = 0, Y, i = 0;
    while(A <= 2){
        scanf("%lf", &N);
        if(N < 0 || N > 10){
            printf("nota invalida\n");
        }
        if(N >= 0 && N <= 10){
            A++;
            i++;
            X = X + N;
        }
    }
    Y = X / i;
    printf("media = %.2lf\n", Y);
    
    return 0;
}