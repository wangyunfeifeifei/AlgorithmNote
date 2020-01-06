#include<cstdio>
#include<cmath>

int main() {
    int c1, c2;
    scanf("%d%d", &c1, &c2);
    double clc = (c2-c1)*1.0/100;
    int sec = (int)round(clc);
    printf("%02d:%02d:%02d\n", sec/3600, (sec%3600)/60, sec%60); // 高位不足要用0 补齐
    return 0;
}
