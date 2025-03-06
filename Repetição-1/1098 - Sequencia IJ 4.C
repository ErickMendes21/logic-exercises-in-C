#include <stdio.h>
 
int main() {
    float a=0, b=0;
    for(int i = 0; i < 33; i++){
        b++;
        if(i%3==0 && i>0){
            b = b + 0.2;
            b = b - 3;
            a = a + 0.2;
        }
        if(a==0||a==1||a>2){
            printf("I=%.0f J=%0.lf\n", a, b);
        }else{
            printf("I=%.1f J=%.1lf\n", a, b);
        }
    }
 
    return 0;
}