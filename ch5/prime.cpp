#include<math.h>

bool isPrime(int n) {
    if(n<=1)return false;
    int sqr=(int)sqrt(1.0*n);
    for(int i=2;i<=sqr;i++) {
        if(n%i==0)return false;
    }
    return true;
}

bool isPrime2(int n) {
    if(n<=1)return false;
    for(int i=2;i*i<=n;i++) {
        if(n%i==0)return false;
    }
    return true;
}

// 素数表的获取
const int maxn = 101;
int prime[maxn], pNum=0;
bool p[maxn]={0};
void Find_Prime(){
    for(int i=1;i<maxn;i++) {
        if(isPrime(i)) {
            prime[pNum++]=i;
            p[i]=true;
        }
    }
}

// 素数筛
const int maxn2=101;
int prime2[maxn2],pNum2=0;
bool p2[maxn2] = {0};
void Find_Prime2() {
    for(int i=2;i<maxn2;i++) {
        if(p[i]==false) {
            prime[pNum2++]=i;
            for(int j=i+1;j<maxn2;j+=i) {
                p2[j]=true;
            }
        }
    }
}
