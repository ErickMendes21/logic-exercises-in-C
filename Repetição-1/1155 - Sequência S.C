#include <stdio.h>
 
int main() {
    double V = 1.0, S, X, aux, b = 3;
    S = 1 + 1/2.0;
    for(double i = 3.0; i <= 100; i++){
        if(i == 3){
            aux = S + V / i;
            i++;
        }
        aux = aux + V / i;
    }
    printf("%.2lf\n", aux);
    
    return 0;
}