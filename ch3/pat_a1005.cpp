#include<stdio.h>
#include<string.h>

char words[10][10] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main() {
    char num[110];
    scanf("%s", num);
    int sum=0;
    for(int i=0; i<strlen(num); i++) sum+=num[i]-'0';
    if(sum==0){
        printf("zero\n");
        return 0;
    }
    int ans[5];
    int i=0;
    
    while(sum>0) {
        ans[i++]=sum%10;
        sum/=10;
    }
    
    for(i--;i>=0;i--){
        printf("%s", words[ans[i]]);
        if(i==0)printf("\n");
        else printf(" ");
    }
    return 0;
}