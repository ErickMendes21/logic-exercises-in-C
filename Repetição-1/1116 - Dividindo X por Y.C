#include <stdio.h>

int main() {
    int N, N1, N2;
    double R;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        scanf("%d%d", &N1, &N2);
        R = (double)N1 / N2;
        if(N2 == 0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%.1lf\n", R);
        }
    }

    return 0;
}