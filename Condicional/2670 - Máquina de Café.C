#include <stdio.h>

int main()
{
    int A1, A2, A3, X1, X2, X3, Menor;
    scanf("%d %d %d", &A1, &A2, &A3);
    
    
    
    X1 = (A2 + (A3 *2))*2;
    X2 = (A1 + A3)*2;
    X3 = ((A1*2) + A2) * 2;
    /*
    X1 = ((A2)+ A3)*2;
    X2 = (A1+A3)*2;
    X3 = ((A3)+ A1 *2)*2;
    */
    if(X1 <= X2){
        if(X1 <= X3){
            Menor = X1;
        }else{
            Menor = X3;
        }
    }else
    {
        if(X2 <= X3){
            Menor = X2;
        }else{
            Menor = X3;
        }
    }
    
    printf("%d\n", Menor);
    return 0;
}