#include<cstdio>

int main() {
    int n;
    char str[100] = "123";
    sscanf(str, "%d", &n); // sscanf()将 str 中的内容以%d的形式传给了变量n
    printf("%d\n", n);
    return 0;
}
