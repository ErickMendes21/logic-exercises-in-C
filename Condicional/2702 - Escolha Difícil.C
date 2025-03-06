#include <stdio.h>
 
int main() {
    int CA, BA, PA, CR, BR, PR, X, Y, Z, W = 0;
    scanf("%d%d%d%d%d%d", &CA, &BA, &PA, &CR, &BR, &PR);
    if(CR > CA){
        X = CR - CA;
    }
    if(BR > BA){
        Y = BR - BA;
    }
    if(PR > PA){
        Z = PR - PA;
    }
    W = X + Y + Z;
    printf("%d\n", W);
 
    return 0;
}