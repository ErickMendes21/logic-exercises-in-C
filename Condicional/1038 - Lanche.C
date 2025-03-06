#include <stdio.h>
 
int main() {
    int C, Q;
    double X, CQ = 4.00, XS = 4.50, XB = 5.00, TS = 2.00, R = 1.50;
    scanf("%d%d",  &C, &Q);
    if(C == 1){
        X = CQ * Q;
        printf("Total: R$ %.2lf\n", X);
    }
    if(C == 2){
        X = XS * Q;
        printf("Total: R$ %.2lf\n", X);
    }
    if(C == 3){
        X = XB * Q;
        printf("Total: R$ %.2lf\n", X);
    }
    if(C == 4){
        X = TS * Q;
        printf("Total: R$ %.2lf\n", X);
    }
    if(C == 5){
        X = R * Q;
        printf("Total: R$ %.2lf\n", X);
    }

    return 0;
}