#include<cstdio>

int main() {
    int a, b;
    bool flag=true;
    int cnt = 0;
    while(scanf("%d%d", &a, &b)!=EOF) {
        if(b==0)continue;
        else {
            if(flag){
                flag=false;
            }else{
                printf(" ");
            }
            printf("%d %d", a*b, b-1);
            cnt++;
        }
    }
    if(cnt==0)printf("0 0");
    printf("\n");
    return 0;
}
