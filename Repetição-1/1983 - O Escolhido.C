#include <stdio.h>
 
int main() {
    int N, Mat, X = 0;
    double nota, M = 0;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        scanf("%d", &Mat);
        scanf("%lf", &nota);
        if(nota > M){
            M = nota;
            X = Mat;
        }
    }
    if(M >= 8.0){
        printf("%d\n", X);
    }else{
        printf("Minimum note not reached\n");
    }
    
    return 0;
}