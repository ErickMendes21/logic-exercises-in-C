#include <stdio.h>

int main() {
    int N, fat;
    scanf("%d", &N);
    for(int i = 1; i < N; i++){
        if(i == 1){
            fat = N * (N - i);
            i++;
        }
        fat = fat * (N - i);
    }
    printf("%d\n", fat);

	return 0;
}