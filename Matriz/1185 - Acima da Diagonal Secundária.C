#include <stdio.h>
#include <string.h>
 
int main() {
    double M[12][12], S = 0, count = 0;
    char op[5];
    scanf("%s", op);
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf\n", &M[i][j]);
        }
    }

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 11 - i; j++){
            S = S + M[i][j];
            count++;
        }
    }
    
    if(strcmp(op, "S") == 0){
        printf("%.1lf\n", S);
    }else{
        printf("%.1lf\n", S/count);
    }
 
    return 0;
}