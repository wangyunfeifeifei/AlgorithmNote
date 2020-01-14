#include<cstdio>

int main() {
    bool flag=true;
    int a, b;
    do{
        scanf("%d%d", &a, &b);
        if(b!=0) {
            if (flag) {
                printf("%d %d", a*b, b-1);
                flag = false;
            } else {
                printf(" %d %d", a*b, b-1);
            }
        }
    }while(b!=0);
    printf("\n");
    return 0;
}
