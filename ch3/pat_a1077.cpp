#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main() {
    char suffix[300];
    char talk[300];
    int n;
    int minLen=0;
    suffix[0]='\0';
    scanf("%d", &n);
    getchar(); // 获取回车
    for(int i=0; i<n; i++) {
        fgets(talk, 300, stdin);
        talk[strlen(talk)-1]='\0'; // 处理掉最后的回车
        reverse(talk, talk+strlen(talk));
        if(strlen(suffix)==0){
            strcpy(suffix, talk);
            minLen=strlen(suffix);
            continue;
        }
        int j;
        for(j=0; j<minLen&&j<strlen(talk)&&talk[j]==suffix[j]; j++) {}
        minLen=min(minLen, j);
    }
    if(minLen!=0) {
        for(int i=minLen-1; i>=0; i--){
            printf("%c", suffix[i]);
        }
        printf("\n");
    } else {
        printf("nai");
    }
    return 0;
}