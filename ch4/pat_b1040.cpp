#include<cstdio>
#include<string.h>

int main() {
    char ch[100005];
    scanf("%s", ch);
    int len=strlen(ch);
    int cnt=0;
    int leftP[100005]={0};
    for(int i=0;i<strlen(ch);i++) {
        if(i>0) {
            leftP[i] = leftP[i-1];
        }
        if(ch[i]=='P') {
            leftP[i]++;
        }
    }
    int rightNumT=0;
    for(int i=len-1;i>=0;i--) {
        if(ch[i]=='T'){
            rightNumT++;
        } else if(ch[i]=='A') {
            cnt = (cnt + leftP[i]*rightNumT)%1000000007;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
