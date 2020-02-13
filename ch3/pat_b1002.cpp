#include<stdio.h>
#include<string.h>

char num[10][10]={"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

int main() {
    int sum=0;
    char str[110];
    scanf("%s", str);
    for(int i=0; i<strlen(str); i++) {
        sum+=(str[i]-'0');
    }
    int ans[5];
    int len=0;
    if(sum==0)printf("%s\n", num[0]);
    else{
        while(sum>0) {
            ans[len++]=sum%10;
            sum/=10;
        }
    }
    for(int i=len-1;i>=0;i--) {
        printf("%s", num[ans[i]]);
        if(i==0)printf("\n");
        else printf(" ");
    }
    return 0;
}