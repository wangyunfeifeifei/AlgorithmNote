// gcd为最大公约数
int gcd(int a, int b) {
    if(b==0) return a;
    else return gcd(b, a%b);
}

// 最大公约数就是 a*b/gcd(a,b) 即除掉一份共同的因子
