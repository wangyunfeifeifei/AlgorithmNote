#include<stdio.h>
#include<string.h>

int main() {
    int cnt[10]={0};
    char num[1010];
    scanf("%s", num);
    for(int i=0; i<strlen(num); i++) {
        cnt[num[i]-'0']++;
    } 
    for(int i=0; i<10; i++) 
        if(cnt[i]>0) printf("%d:%d\n", i, cnt[i]);
    return 0;
}
