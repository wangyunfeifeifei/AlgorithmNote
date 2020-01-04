#include<cstdio>
using namespace std;

int main() {
    int hh, mm, ss;
    scanf("%d:%d:%d", &hh, &mm, &ss); // 前面的字符串就是输入的字符串， scanf是把相应的字符串填入变量中
    printf("%d %d %d", hh, mm, ss);
    return 0;
}
