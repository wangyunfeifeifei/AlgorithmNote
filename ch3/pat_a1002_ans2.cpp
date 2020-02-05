#include<stdio.h>

int main() {
    double p[1010]={0};
    int k=0, cnt=0;
    int a; // 幂次
    double b; // 系数
    scanf("%d", &k);
    for(int i=0; i<k;i++) {
        cnt++;
        scanf("%d%lf", &a, &b);
        p[a]=b;
    }
    scanf("%d", &k);
    for(int i=0; i<k; i++) {
        scanf("%d%lf", &a, &b);
        if(p[a]==0){
            cnt++;
            p[a]=b;
        } else {
            p[a] += b;
        }
        if(p[a]==0)cnt--;
    }
    printf("%d", cnt);
    for(int i=1000; i>=0; i--) {
        if(p[i]!=0) {
            printf(" %d %.1lf", i, p[i]);
        }
    }
    printf("\n");
    return 0;
}