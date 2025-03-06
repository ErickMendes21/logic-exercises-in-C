#include <stdio.h>
 
int main() {
    int i, V, S = 0;
    double X = 0, Y;
    for(int i = 1; V >= 0; i++){
        scanf("%d", &V);
        if(V >= 0){
            S++;
            X = X + V;
            Y = X/S;
        }
    }
    printf("%.2lf\n", Y);
    

    return 0;
}