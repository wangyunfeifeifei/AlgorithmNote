#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char num[10010];
    scanf("%s", num);
    if(num[0]=='-')printf("-");
    int len=strlen(num);
    int e_pos=0;
    for(int i=1; i<len; i++) {
        if(num[i]=='E'){
            e_pos=i;
            break;
        }
    }
    int power=atoi(num+e_pos+1);
    if(power<0) {
        printf("0.");
        for(int i=1; i<-power; i++) {
            printf("0");
        }
        for(int i=1; i<e_pos;i++) {
            if(num[i]=='.')continue;
            printf("%c", num[i]);
        }
    }else {
        int i;
        for(i=1;i<=power+1; i++) {
            if(i<e_pos) {
                if(num[i]=='.'){
                    power++;
                    continue;
                }
                printf("%c", num[i]);
            } else {
                printf("0");
            } 
        }
        if(i<e_pos){
            printf(".");
        }
        while(i<e_pos){
            printf("%c",num[i]);
            i++;
        }
    } 
    return 0;
}