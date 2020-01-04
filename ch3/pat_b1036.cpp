#include<cstdio>
#include<cmath>

int main() {
    int n;
    char c;
    int row;
    scanf("%d %c", &n, &c);
    if(n&1) row = n/2+1;
    else row = n/2;
    for(int i=1;i<=row;i++) {
        if(i==1||i==row) {
            for(int j=0;j<n;j++)printf("%c",c);
        }else {
            printf("%c", c);
            for(int j=1;j<n-1;j++)printf(" ");
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}
