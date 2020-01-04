#include<cstdio>

int main() {
    int a;
    char c, str[10];
    // scanf中的%c可以读入空格的
    scanf("%d%c%s", &a, &c, str); // 输入 1 a bcd
    printf("a=%d,c=%c,str=%s", a, c, str); // 输出 a=1,c= , str=a
    return 0;
}
