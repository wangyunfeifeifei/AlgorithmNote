#include<cstdio>

int main() {
    int cnt[5] = {0};
    int ans[5] = {0};
    int temp, n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &temp);
        switch(temp%5) {
            case 0:
                if(temp%2==0){
                    ans[0]+=temp;
                    cnt[0]++;
                }
                break;
            case 1:{
                int f=1;
                if(cnt[1]%2==1)f=-1;
                ans[1] += temp*f;
                cnt[1]++;
                break;
            }
            case 2:
                cnt[2]++;
                ans[2]++;
                break;
            case 3:
                ans[3]+=temp;
                cnt[3]++;
                break;
            case 4:
                cnt[4]++;
                if(temp>ans[4])ans[4] = temp;
                break;
        }
    }
    if(cnt[0]==0)printf("N ");else printf("%d ", ans[0]);
    if(cnt[1]==0)printf("N ");else printf("%d ", ans[1]);
    if(cnt[2]==0)printf("N ");else printf("%d ", ans[2]);
    if(cnt[3]==0)printf("N ");else printf("%.1lf ", (ans[3]*1.0)/cnt[3]);
    if(cnt[4]==0)printf("N\n");else printf("%d\n", ans[4]);
    return 0;
}
