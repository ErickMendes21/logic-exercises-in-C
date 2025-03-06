#include <stdio.h>
 
int main() {
    int T, B, Ai1, Di1, Li1, Ai2, Di2, Li2;
    double VG1, VG2;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
        scanf("%d%d%d%d%d%d%d", &B, &Ai1, &Di1, &Li1, &Ai2, &Di2, &Li2);
        if(Li1 % 2 == 0){
            VG1 = ((Ai1 + Di1) / 2) + B;
        }else{
            VG1 = ((Ai1 + Di1) / 2);
        }
        if(Li2 % 2 == 0){
            VG2 = ((Ai2 + Di2) / 2) + B;
        }else{
            VG2 = ((Ai2 + Di2) / 2);
            
        }
        if(VG1 > VG2){
            printf("Dabriel\n");
        }else{
            if(VG2 > VG1){
                printf("Guarte\n");
            }else{
                if(VG1 == VG2){
                    printf("Empate\n");
                }
            }
        }
    }

 
    return 0;
}