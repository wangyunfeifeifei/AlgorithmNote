#include<cstdio>
const int N=54;
char mp[5] = {'S','H','C','D','J'};
int start[N+1],end[N+1],next[N+1]; // next数组存放每个位置上的牌在操作后的位置

int main() {
    int k;
    scanf("%d", &k);
    for(int i=0;i<=N;i++) {
        start[i] = i;
    }
    for(int i=1; i<=N; i++) {
        scanf("%d", &next[i]);
    }
    for(int step=0; step<k; step++) {
        for(int i=1;i<=N;i++) {
            end[next[i]] = start[i];
        }
        for(int i=1;i<=N;i++) {
            start[i] = end[i];
        }
    }
    for(int i=1;i<=N;i++) {
        if(i!=1)printf(" ");
        start[i]--; // 控制成以0开始的形式
        printf("%c%d", mp[start[i]/13], start[i]%13+1);
    }
    return 0;
}
