#include<cstdio>

int main() {
    int N;
    int dis[100005]; // 1-n distance
    int M;
    scanf("%d", &N);
    dis[1]=0;
    for(int i=2;i<=N+1;i++) {
        int t;
        scanf("%d", &t);
        dis[i]=dis[i-1]+t;
    }
    scanf("%d", &M);
    int a,b;
    for(int i=1;i<=M;i++) {
        scanf("%d%d", &a, &b);
        if(a>b) {
            int t=a;
            a=b;
            b=t;
        }
        int d=dis[b]-dis[a];
        d=d>dis[N+1]-d?dis[N+1]-d:d;
        printf("%d\n", d);
    }
    return 0;
}
