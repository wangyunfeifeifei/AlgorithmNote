#include<stdio.h>
#include<math.h>

struct factor{
    int x, cnt;
}fac[50];

const int maxn=100015;
int prime[maxn],pNum=0;
bool p[maxn]={0};

void find_Prime() {
    for(int i=2;i<maxn;i++) {
        if(!p[i]) {
            prime[pNum++]=i;
            for(int j=i+i;j<maxn;j+=i) {
                p[j]=true;
            }
        }
    }
}

int main() {
    find_Prime();
    long long int n;
    scanf("%lld", &n);
    if(n==1){
        printf("1=1\n");
        return 0;
    }
    long long int origin = n;
    int c=0;
    for(int i=0;i<pNum;i++) {
        if(n%prime[i]==0) {
            fac[c].x=prime[i];
            fac[c].cnt = 0;
            while(n%prime[i]==0){
                n/=prime[i];
                fac[c].cnt++;
            }
            c++;
        }
        if(n==1)break;
    }
    printf("%lld=", origin);
    if(n!=1) {
        fac[c].x=n;
        fac[c++].cnt=1;
    }
    for(int i=0;i<c;i++) {
        if(i!=0)printf("*");
        if(fac[i].cnt>1){
            printf("%d^%d", fac[i].x, fac[i].cnt);
        } else{
            printf("%d", fac[i].x);
        }
    }
    printf("\n");
    return 0;
}
