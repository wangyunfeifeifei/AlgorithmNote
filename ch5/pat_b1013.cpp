#include<stdio.h>

const int maxn=150000;
int prime[maxn],pNum=1;
bool p[maxn]={0};
void Find_Prime() {
    for(int i=2;i<maxn;i++) {
        if(!p[i]) {
            prime[pNum++] = i;
            for(int j=2*i;j<maxn;j+=i) {
                p[j]=true;
            }
        }
    }
}

int main() {
    Find_Prime();
    int M, N, count=0;
    scanf("%d%d", &M, &N);
    for(int i=M;i<=N;i++) {
        printf("%d", prime[i]);
        count++;
        if(count%10!=0 && i < N)printf(" ");
        else printf("\n");
    }
    return 0;
}
