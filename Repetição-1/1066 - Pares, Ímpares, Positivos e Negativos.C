#include <stdio.h>
 
int main() {
    int V, VP = 0, VN = 0, VI = 0, VPa = 0;
    for(int i = 1; i <= 5; i++){
        scanf("%d", &V);
        if(V > 0){
            VP++;//valores positivos
        }if(V < 0){
            VN++;//negativos
        }
        if(V % 2 == 0 || V == 0){
            VPa++;
        }if(V % 2 != 0){
            VI++;
        }
    }
    printf("%d valor(es) par(es)\n", VPa);
    printf("%d valor(es) impar(es)\n", VI);
    printf("%d valor(es) positivo(s)\n", VP);
    printf("%d valor(es) negativo(s)\n", VN);
 
    return 0;
}