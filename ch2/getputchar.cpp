#include<cstdio>

int main() {
    char c1, c2, c3;
    c1 = getchar();
    getchar();
    c2 = getchar();
    c3 = getchar();
    putchar(c1);
    putchar(c2);
    putchar(c3);
    // 输入 abcd
    // 输出 acd
    // getchar() 可以识别换行符的
    return 0;
}
