#include <stdio.h>
 
int main() {
    double X;
    scanf("%lf", &X);
    double N[100] = { X };
    for(int i = 0; i < 100; i++){
        if(i > 0){
            N[i] = N[i - 1] / 2;
        }
        printf("N[%d] = %.4lf\n", i, N[i]);
    }
 
    return 0;
}