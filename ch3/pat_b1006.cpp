#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int b=n/100;
    int s=(n/10)%10;
    int x=n%10;
    for(int i=0;i<b;i++)printf("B");
    for(int i=0;i<s;i++)printf("S");
    for(int i=1;i<=x;i++)printf("%d",i);
    printf("\n"); 
    return 0;
}