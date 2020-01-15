// 快速幂
#include<cstdio>

typedef long long LL;

// 递归写法
LL binaryPow(LL a, LL b, LL m) {
    if(b == 0) return 1;
    if(b%2==1) return a*binaryPow(a, b-1, m) % m;
    else {
        LL mul = binaryPow(a, b/2, m);
        return mul*mul%m;
    }
}

// 迭代写法
LL binaryPow2(LL a, LL b, LL m) {
    LL ans = 1;
    while(b>0) {
        if(b&1) { // 如果b的二进制最后一位是1
            ans = ans*a%m;
        }
        a = a*a%m;
        b>>=1;
    }
    return ans;
}

int main() {

    return 0;
}
