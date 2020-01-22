/**
 * 求解扩展欧几里得问题
 * 求解 ax+by = gcd(a,b)
 */

int exGcd(int a, int b, int &x, int &y) {
    if(b==0) {
        x = 1;
        y=0;
        return a;
    }
    int g = exGcd(b, a%b, x, y);
    int temp = x;
    x = y;
    y = temp - a/b*y;
    return g;
}
// 当exGcd函数结束时，x和y就是所求解
