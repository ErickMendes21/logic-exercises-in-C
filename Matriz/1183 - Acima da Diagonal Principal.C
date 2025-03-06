#include <stdio.h>
#include <string.h>

int main(){
    char O[2];
    double M[12][12], S = 0, count = 0;
    scanf("%s", O);
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    
    for(int i = 0; i < 12; i++){
        for(int j = i + 1; j < 12; j++){
            S = S + M[i][j];
            count++;
        }
    }
    if(strcmp(O, "S") == 0){
        printf("%.1lf\n", S);
    }else{
        printf("%.1lf\n", S/count);
    }

    return 0;
}