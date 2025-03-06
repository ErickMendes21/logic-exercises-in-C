#include <stdio.h>
#include <string.h>
 
int main(){
    double M[12][12], S = 0, count = 0;
    char op[5];
    scanf("%s", op);
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    
    for(int i = 1; i < 6; i++){
        for(int j = 12 - i; j > 6 && j < 12; j++){
            S = S + M[i][j];
            count++;
        }
    }
    
    for(int i = 6; i < 11; i++){
        for(int j = i + 1 ;j > 6 && j < 12; j++){
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