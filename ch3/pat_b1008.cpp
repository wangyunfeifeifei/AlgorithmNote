#include<cstdio>

void reverse(int *a, int *b) {
    while(a<b) {
        int temp = *a;
        *a = *b;
        *b = temp;
        a++;
        b--;
    }
}

int main() {
    int N, M;
    int A[105];
    scanf("%d%d", &N, &M);
    M = M%N; // M不能保证小于N
    for(int i=0;i<N;i++) {
        scanf("%d", &A[i]);
    }
    reverse(A, &A[N-M-1]);
    reverse(&A[N-M], &A[N-1]);
    reverse(A, &A[N-1]);
    for(int i=0;i<N;i++) {
        if(i==0)printf("%d", A[i]);
        else printf(" %d", A[i]);
    }
    printf("\n");
    return 0;
}
