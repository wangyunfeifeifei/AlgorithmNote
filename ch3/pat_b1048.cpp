#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

char encryOdd(char a, char b) {
    char t[13]={'0','1','2','3','4','5','6','7','8','9','J','Q','K'};
    int ret_n = (a-'0' + b-'0')%13;
    return t[ret_n]; 
}

char encryEval(char a, char b) {
    int m=b-a;
    if(m<0)m+=10;
    return m+'0';
}

int main() {
    char a[110],b[110];
    scanf("%s%s", a, b);
    int len_a=strlen(a);
    int len_b=strlen(b);
    reverse(a, a+len_a);
    reverse(b, b+len_b);
    char ans[110];
    int i;
    for(i=0; i<len_a&&i<len_b; i++) {
        if((i+1)%2==1) {
            ans[i]=encryOdd(a[i], b[i]);
        }else{
            ans[i]=encryEval(a[i], b[i]);
        }
    }
    for(;i<len_a;i++){
        if((i+1)%2==1) ans[i]=encryOdd(a[i], '0');
        else ans[i]=encryEval(a[i], '0');
    }
    for(;i<len_b;i++)ans[i]=b[i];
    ans[i]='\0';
    reverse(ans, ans+i);
    
    printf("%s\n",ans);
    return 0;
}