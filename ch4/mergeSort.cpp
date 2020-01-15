#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 100;

// 将数组A的[L1, R1]与[L2, R2]区间合并为有序区间(此处L2即为R1+1)
void merge(int A[], int L1, int R1, int L2, int R2) {
    int i=L1, j=L2;
    int temp[maxn], index=L1;
    while(i <= R1 && j <= R2) {
        if(A[i] <= A[j]) {
            temp[index++] = A[i++];
        }else {
            temp[index++]=A[j++];
        }
    }
    while(i<=R1) temp[index++]=A[i++];
    while(j<=R2) temp[index++]=A[j++];
    for(i=L1;i<index;i++) {
        A[i]=temp[i];
    }
}

void mergeSort(int A[], int left, int right) {
    if(left<right) {
        int mid=(left+right)/2;
        mergeSort(A, left, mid);
        mergeSort(A, mid+1, right);
        merge(A, left, mid, mid+1, right);
    }
}

// 自底向上的归并排序
void mergeSort2(int A[], int n) {
    for(int sz=1;sz<=n;sz+=sz) {
        for(int i=0;i+sz<n;i+=sz+sz) {
            merge(A, i, i+sz-1, i+sz, min(i+sz+sz-1, n-1));
        }
    }
}

int main() {
    int arr[5] = {1,3,2,6,4};
    mergeSort2(arr, 5);
    for(int i=0;i<5;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
