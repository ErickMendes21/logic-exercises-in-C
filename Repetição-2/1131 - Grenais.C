#include <stdio.h>
 
int main() {
    int Gi, Gg, Ngrenal, a = 0, b = 0, c = 0, d = 0, e = 0, i = 0;
    scanf("%d%d", &Gi, &Gg);
    i++;
    if(Gi > Gg){
        a++;
    }
    if(Gg > Gi){
        b++;
    }
    if(Gi == Gg){
        c++;
    }
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &Ngrenal);
    if(Ngrenal == 1){
        while(Ngrenal == 1){
            i++;
            scanf("%d%d", &Gi, &Gg);
            if(Gi > Gg){
                a++;
            }
            if(Gg > Gi){
                b++;
            }
            if(Gi == Gg){
                c++;
            }
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &Ngrenal);
        }
    }
    if(Ngrenal == 2){
        printf("%d grenais\n", i);
        printf("Inter:%d\n", a);
        printf("Gremio:%d\n", b);
        printf("Empates:%d\n", c);
    }
    if(a > b){
        printf("Inter venceu mais\n");
    }
    if(b > a){
        printf("Gremio vendeu mais\n");
    }
 
    return 0;
}