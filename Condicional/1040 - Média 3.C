#include <stdio.h>
 
int main() {
    float N1, N2, N3, N4, M;
    scanf("%f%f%f%f", &N1, &N2, &N3, &N4);
    M = (N1 * 0.2) + (N2 * 0.3) + (N3 * 0.4) + (N4 * 0.1);
    printf("Media: %.1f\n", M);
    if(M >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(M < 5.0){
        printf("Aluno reprovado.\n");
    }
    if(M >= 5.0 && M <= 6.9){
        printf("Aluno em exame.\n");
        float NE, X = 0;
        scanf("%f", &NE);
        printf("Nota do exame: %.1f\n", NE);
        X = (NE + M) / 2;
        if(X >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", X);
        }
        if(X <= 4.9){
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", X);
        }
    }

    return 0;
}