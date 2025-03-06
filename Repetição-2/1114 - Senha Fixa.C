#include <stdio.h>
 
int main() {
    int N;
    do{
        scanf("%d", &N);
        if(N == 2002){
            printf("Acesso Permitido\n");
        }else{
            printf("Senha Invalida\n");
        }
    }while(N != 2002);
 
    return 0;
}