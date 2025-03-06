#include <stdio.h>
#include <string.h>
 
int main() {
    double C, M[12][12], S = 0;
    char T[2];
    scanf("%lf%s", &C, T);
    if(strcmp(T, "S")==0){
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                scanf("%lf", &M[i][j]);
                if(j == C){
                    S = S + M[i][j];
                }
            }
        }
        printf("%.1lf\n", S);
    }else{
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                scanf("%lf", &M[i][j]);
                if(j == C){
                    S = S + M[i][j];
                }
            }
        }
        printf("%.1lf\n", S/12);
    }
 
    return 0;
}