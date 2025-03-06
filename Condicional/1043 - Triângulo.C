#include <stdio.h>
 
int main() {
    double A, B, C, X, P, Y, Z, W;
    scanf("%lf%lf%lf", &A, &B, &C);
    X = A + B;
    Y = A + C;
    Z = B + C;
    if(X > C && Y > B && Z > A){
        P = A + B + C;
        printf("Perimetro = %.1lf\n", P);
    }else{
        W = ((A + B) * C) / 2;
        printf("Area = %.1lf\n", W);
    }
    
 
    return 0;
}