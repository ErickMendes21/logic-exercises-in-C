#include <stdio.h>
 
int main() {
    int N, X, Y, A;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        scanf("%d%d", &X, &Y);
        A = X + Y;
        if(A == 0){
            printf("PROXYCITY\n");
        }
        if(A == 1){
            printf("P.Y.N.G.\n");
        }
        if(A == 2){
            printf("DNSUEY!\n");
        }
        if(A == 3){
            printf("SERVERS\n");
        }
        if(A == 4){
            printf("HOST!\n");
        }
        if(A == 5){
            printf("CRIPTONIZE\n");
        }
        if(A == 6){
            printf("OFFLINE DAY\n");
        }
        if(A == 7){
            printf("SALT\n");
        }
        if(A == 8){
            printf("ANSWER!\n");
        }
        if(A == 9){
            printf("RAR?\n");
        }
        if(A == 10){
            printf("WIFI ANTENNAS\n");
        }
    }
 
    return 0;
}