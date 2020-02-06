#include<stdio.h>

struct Game{
    double odds[3];
}g;

char ch[3]={'W', 'T', 'L'};

int main() {
    double ans = 1;
    for(int i=0; i<3; i++) {
        double max=0;
        int max_i=0;
        for(int j=0; j<3; j++) {
            scanf("%lf", &g.odds[j]);
            if(g.odds[j] > max){ 
                max=g.odds[j];
                max_i=j;
            }
        }
        printf("%c ", ch[max_i]);
        ans*=max;
    }
    printf("%.2lf\n", (ans*0.65-1)*2);
    return 0;
}
