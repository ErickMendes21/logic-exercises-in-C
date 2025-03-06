#include <stdio.h>
 
int main() {
    float A, B, C, AQ, BQ, CQ, NUM;
    scanf("%f%f%f", &A, &B, &C);
    if(C > A){
        NUM = A;
        A = C;
        C = NUM;
    }
    if(C > B){
        NUM = B;
        B = C;
        C = NUM;
    }
    if(B > A){
        NUM = A;
        A = B;
        B = NUM;
    }
    
    AQ = A * A;
    BQ = B * B;
    CQ = C * C;
    
    if(A >= B + C){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(AQ > BQ + CQ){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(AQ < BQ + CQ){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(AQ == BQ + CQ){
        printf("TRIANGULO RETANGULO\n");
    }
    if(A == B && B == C && A == C){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(A == B || B == C || A == C){
        printf("TRIANGULO ISOSCELES\n");
    }
    
    return 0;
}