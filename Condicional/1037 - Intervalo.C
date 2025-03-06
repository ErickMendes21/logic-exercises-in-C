#include <stdio.h>
 
int main() {
    double V;
    scanf("%lf", &V);
    if( V < 0 || V > 100){
        printf("Fora de intervalo\n");
    }
    if(V >= 0 && V <= 25.00){
        printf("Intervalo [0,25]\n");
    }
    if(V > 25.00 && V <= 50.00){
        printf("Intervalo (25,50]\n");
    }
    if(V > 50.00 && V <= 75.00){
        printf("Intervalo (50,75]\n");
    }
    if(V > 75.00 && V <= 100){
        printf("Intervalo (75,100]\n");
    }
 
    return 0;
}