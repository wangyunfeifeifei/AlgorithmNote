#include<cstring>
#include<cstdio>

int main() {
    char str[10], str1[50], str2[50];
    // strlen() 返回字符串长度
    gets(str);
    int len = strlen(str);
    printf("%d\n", len);

    // strcmp() 返回两字符串大小比较结果, 按字典序比较
    gets(str1);
    gets(str2);
    int cmp = strcmp(str1, str2);
    if(cmp<0) printf("str1 < str2\n");
    else if(cmp > 0) printf("str1 > str2\n");
    else printf("str1 == str2\n");

    // strcpy() 把一个字符串赋值给另一个字符串
    gets(str1);
    gets(str2);
    strcpy(str1, str2);
    puts(str1);

    // strcat()可以把一个字符串拼接到另一个字符串后面
    gets(str1);
    gets(str2);
    strcat(str1, str2);
    puts(str1);
    
    return 0;
}
