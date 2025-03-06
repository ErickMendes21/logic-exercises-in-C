#include <stdio.h>
 
int main() {
    int X, Y;
    scanf("%d%d", &X, &Y);
    X = X + 1;
    Y = Y + 1;
    for(int i = X; i <= Y; i++){
        if(i % 5 == 2 || i % 5 == 3){
            printf("%d\n", i);
        }
    }
    for(int i = Y; i <= X; i++){
        if(i % 5 == 2 || i % 5 == 3){
            printf("%d\n", i);
        }
    }
    
 
    return 0;
}