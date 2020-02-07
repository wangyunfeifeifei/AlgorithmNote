#include<stdio.h>
#include<math.h>

void printch(int n, int max, char ch) {
    int blank = max-n;
    for(int i=0; i<blank; i++) printf(" ");
    for(int i=0; i<2*n-1; i++) printf("%c", ch);
    printf("\n");
}

int main() {
    int k;
    char ch;
    scanf("%d %c", &k, &ch);

    int n = sqrt((k+1)*1.0/2);
    for(int i=n; i>0; i--) {
        printch(i, n, ch);
    }
    for(int i=2; i<=n; i++) {
        printch(i, n, ch);
    }
    printf("%d\n", k-n*n*2+1);
    return 0;
}