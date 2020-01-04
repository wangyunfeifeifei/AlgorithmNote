#include<cstdio>

int main() {
    int a = 123, b = 1234567;
    // %md 不足m位用空格补齐, m可以是负数，这样会在右边补齐
    printf("%5d\n", a); // 不足5位会自动用空格补齐
    printf("%5d\n", b); // 大于5位就直接输出了
    // %0md 不足m位用0补齐
    printf("%05d\n", a); // 不足5位用0补齐
    // %.mf
    double d1 = 12.3456;
    printf("%.0f\n", d1);
    printf("%.1f\n", d1);
    printf("%.2f\n", d1);
    return 0;
}
