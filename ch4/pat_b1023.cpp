#include<cstdio>

int main() {
    int a[10];
    for(int i=0;i<10;i++) {
        scanf("%d", &a[i]);
    }
    int i=1;
    for(;a[i]==0;i++){}
    printf("%d", i);
    a[i]--;
    for(i=0;i<10;i++) {
        for(int j=0;j<a[i];j++) {
            printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}
