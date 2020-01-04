#include<cstdio>
#include<cstring>

int main() {
    char str[260];
    scanf("%s", str);
    int i=0, j=strlen(str)-1;
    bool flag = true;
    for(;i<=j&&str[i]==str[j];i++, j--){}
    if(i>j){
        printf("YES\n");
    }else {
        printf("NO\n");
    }
    return 0;
}
