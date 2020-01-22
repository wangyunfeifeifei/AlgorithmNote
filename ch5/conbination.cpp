// 组合数计算

// 一、通过定义式直接计算
// 这种方式很容易溢出
long long C(long long n, long long m) {
    long long ans = 1;
    for(long long i=1; i<=n; i++) {
        ans*=i;
    }
    for(long long i=1;i<=m;i++) {
        ans /= i;
    }
    for(long long i=1; i<=n-m;i++) {
        ans /= i;
    }
    return ans;
}

// 二、用递推式计算
// C(n, m) = C(n-1, m) + C(n-1, m-1)
// 这样很容易产生向斐波那契数列递归那样的问题
long long C2(long long n, long long m) {
    if(m == 0 || m == n) return 1;
    return C2(n-1, m) + C2(n-1, m-1);
}

// 可以通过记忆化的操作来解决
const int n=60;
long long res[67][67]={0};
void calC() {
    for(int i=0;i<=n;i++) {
        res[i][0] = res[i][i]=1;
    }
    for(int i=2; i<=n; i++) {
        for(int j=0; j<=i/2; j++) {
            res[i][j] = res[i-1][j] + res[i-1][j-1];
            res[i][i-j] = res[i][j];
        }
    }
}

// 三、通过定义式变形来计算
// 这种方法也很容易溢出
long long C3(long long n, long long m) {
    long long ans=1;
    for(long long i=1; i<=m;i++) {
        ans = ans*(n-m+i)/i;
    }
    return ans;
}

// lucas定理，计算C(n, m)%p
int p=13;
int lucas(int n, int m) {
    if(m==0) return 1;
    return C(n%p, m%p)*lucas(n/p, m/p) % p;
}
