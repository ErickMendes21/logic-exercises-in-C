#include <stdio.h>
 
int main() {
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    if(A > B && C > B && A > C){//A maior, C meio, B menor
        printf("%d\n", B);
        printf("%d\n", C);
        printf("%d\n", A);
    }
    if(A > B && B > C && A > C){//A maior, B meio, C menor
        printf("%d\n", C);
        printf("%d\n", B);
        printf("%d\n", A);
    }
    if(B > A && A > C && B > C){//B maior, A meio, C menor
        printf("%d\n", C);
        printf("%d\n", A);
        printf("%d\n", B);
    }
    if(B > A && C > A && B > C){//B maior, C meio, A menor
        printf("%d\n", A);
        printf("%d\n", C);
        printf("%d\n", B);
    }
    if(C > A && A > B && C > B){//C maior, A meio, B menor
        printf("%d\n", B);
        printf("%d\n", A);
        printf("%d\n", C);
    }
    if(C > B && B > A && C > A){//C maior, B meio, A menor
        printf("%d\n", A);
        printf("%d\n", B);
        printf("%d\n", C);
    }
    printf("\n");
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
 
    return 0;
}