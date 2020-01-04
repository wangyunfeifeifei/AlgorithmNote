#include<cstdio>
#include<cstring>

void reverse(char *s1, char *s2) {
    while(s1<s2) {
        char c = *s1;
        *s1 = *s2;
        *s2 = c;
        s1++;
        s2--;
    }
}

int main() {
    char str[85];
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = '\0';
    int i=0, j=0;
    int len = strlen(str);
    while(i<strlen(str)) {
        for(i=j;str[i]==' '&&i<len;i++){}
        for(j=i;str[j]!=' '&&j<len;j++){}
        reverse(&str[i], &str[j-1]);
    }
    reverse(str, str+(len-1));
    printf("%s\n", str);
    return 0;
}
