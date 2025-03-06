#include <stdio.h>
 
int main() {
    int W, X, Y, Z, H, M, S, D1, D2, H2, M2, S2, DF;
    int temp1, temp2, delta;
    char I[5];
    scanf("%s%d%d%s%d%s%d%s%d%d%s%d%s%d", I, &D1, &H, I, &M, I, &S, I, &D2, &H2, I, &M2, I, &S2);
    temp1 = D1 * 86400 + H * 3600 + M * 60 + S;
    temp2 = D2 * 86400 + H2 * 3600 + M2 * 60 + S2;
    delta = temp2 - temp1;
    W = delta / 86400;
    X = (delta - (86400 * W)) / 3600;
    Y = (delta - (86400 * W) - (3600 * X)) / 60;
    Z = delta - (W * 86400) - (X * 3600) - (Y * 60);
    
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", W, X, Y, Z);
 
    return 0;
}