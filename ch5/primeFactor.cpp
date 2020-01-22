/**
 * 计算n！中有多少个质因子p
 * n!中有 n/p + n/p^2 + n/p^3....个质因子p
 */ 
int cal(int n, int p) {
    int ans = 0;
    while(n) {
        ans += n/p;
        n /= p;
    }
    return ans;
}
// 利用这个算法可以计算出n!末尾有多少个0,这就等于n!中质因子5的个数,即cal(n, 5)
