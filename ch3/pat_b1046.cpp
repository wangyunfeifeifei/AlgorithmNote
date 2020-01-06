#include<cstdio>

int main() {
    int n;
    int a,b,c,d;
    int cnt1=0, cnt2=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        int ans = a + c;
        if(b == d) continue;
        if(b==ans)cnt2++;
        else if(d==ans)cnt1++;
    }
    printf("%d %d\n", cnt1, cnt2);
    return 0;
}
