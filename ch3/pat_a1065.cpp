#include<cstdio>

int main() {
    int T;
    scanf("%d", &T);
    long long int a, b, c;
    bool flag=true;
    for(int i=1; i<=T; i++) {
        scanf("%lld%lld%lld", &a, &b, &c);
        long long res = a+b;
        if(a>0&&b>0&&res<0) {
            flag = true;
        }
        else if(a<0&&b<0&&res>=0) {
            flag = false;
        }
        else if(res>c) {
            flag = true;
        }
        else {
            flag = false;
        }
        flag?printf("Case #%d: true\n", i):printf("Case #%d: false\n", i);
    }
    return 0;
}
