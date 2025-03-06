#include <stdio.h>
 
int main() {
    double S; 
    double I = 0;
    scanf("%lf", &S);
    if(S > 4500){
        I += (S - 4500) * 0.28;
    }
    if(S > 3000){
        if(S > 4500){
            I += 1500 * 0.18;
        }else{
            I += (S - 3000) * 0.18;
        }
    }
    if(S > 2000){
        if(S > 3000){
            I += 1000 * 0.08;
        }else{
            I += (S - 2000) * 0.08;
        }
    }else{
        printf("Isento\n");
        return 0;
    }
    
    printf("R$ %.2lf\n", I);
    
    return 0;
}