#include <stdio.h>
#include <string.h>
 
int main() {
    int N, N1, N2, X;
    char j1[20], j2[20], nome1[30], nome2[30];
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        scanf("%s", nome1);
        scanf("%s", j1);
        scanf("%s", nome2);
        scanf("%s", j2);
        scanf("%d%d", &N1, &N2);
        X = N1 + N2;
        if(strcmp(j1, "PAR") == 0 && X % 2 == 0){
            printf("%s\n", nome1);
        }
        if(strcmp(j1, "IMPAR") == 0 && X % 2 != 0){
            printf("%s\n", nome1);
        }
        if(strcmp(j2, "PAR") == 0 && X % 2 == 0){
            printf("%s\n", nome2);
        }
        if(strcmp(j2, "IMPAR") == 0 && X % 2 != 0){
            printf("%s\n", nome2);
        }
    }

    return 0;
}