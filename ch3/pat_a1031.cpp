#include<stdio.h>
#include<string.h>

char g[50][50];

void init() {
    for(int i=0; i<50; i++)
        for(int j=0; j<50; j++)
            g[i][j]=' ';
}

int main() {
    init();
    char str[100];
    scanf("%s", str);
    int pos=0;
    int n = strlen(str);
    int n1, n2, n3;
    for(n1=0, n2=n+2, n3=0; n1+n2+n3-2==n &&n1<=n2;n1++, n3++, n2=n-n1-n3+2) {}
    n1--;
    n3=n1;
    n2=n-n1-n3+2;
    for(int i=0; i<n1-1; i++) 
        g[i][0]=str[pos++];
    for(int i=0; i<n2-1; i++) 
        g[n1-1][i] = str[pos++];
    for(int i=n3-1; i>=0; i--)
        g[i][n2-1] = str[pos++];
    for(int i=0; i<n1; i++) {
        for(int j=0; j<n2; j++) {
            printf("%c", g[i][j]);
        }
        printf("\n");
    }
    return 0;
}