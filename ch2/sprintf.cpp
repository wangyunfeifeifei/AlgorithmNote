#include<cstdio>

int main() {
    int n = 233;
    char str[100];
    sprintf(str, "n=%d", n);// sprintf 将n替换掉%d写入到str中
    printf("%s\n", str);
    return 0;
}
