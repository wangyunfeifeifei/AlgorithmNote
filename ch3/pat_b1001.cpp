#include<stdio.h>

int main() {
    int n;
    int cnt = 0;
    scanf("%d", &n);
    while(n!=1){
        if((n&1)==0){
            n /= 2;
        } else {
            n = (3*n+1) / 2;
        }
        ++ cnt;
    }
    printf("%d\n", cnt);
    return 0;
}
