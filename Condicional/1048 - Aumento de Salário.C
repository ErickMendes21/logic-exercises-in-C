#include <stdio.h>
 
int main() {
    double S, X, Y;
    char p = '%';
    scanf("%lf", &S);
    if(S >= 0 && S <= 400){
        X = S * 0.15;
        Y = X + S;
        printf("Novo salario: %.2lf\n", Y);
        printf("Reajuste ganho: %.2lf\n", X);
        printf("Em percentual: 15 %c\n", p);
    }
    if(S > 400 && S <= 800){
        X = S * 0.12;
        Y = X + S;
        printf("Novo salario: %.2lf\n", Y);
        printf("Reajuste ganho: %.2lf\n", X);
        printf("Em percentual: 12 %c\n", p);
    }
    if(S > 800 && S <= 1200){
        X = S * 0.10;
        Y = X + S;
        printf("Novo salario: %.2lf\n", Y);
        printf("Reajuste ganho: %.2lf\n", X);
        printf("Em percentual: 10 %c\n", p);
    }
    if(S > 1200 && S <= 2000){
        X = S * 0.07;
        Y = X + S;
        printf("Novo salario: %.2lf\n", Y);
        printf("Reajuste ganho: %.2lf\n", X);
        printf("Em percentual: 7 %c\n", p);
    }
    if(S > 2000){
        X = S * 0.04;
        Y = X + S;
        printf("Novo salario: %.2lf\n", Y);
        printf("Reajuste ganho: %.2lf\n", X);
        printf("Em percentual: 4 %c\n", p);
    }
 
    return 0;
}