#include<cstdio>

void selectSort(int A[], int n) {
    for(int i=0; i<=n; i++) {
        int k=i;
        for(int j=i; j<=n; j++) {
            if(A[j] < A[k]) {
                k = j;
            }
        }
        int temp = A[i];
        A[i] = A[k];
        A[k] = temp;
    }
}

void insertSort(int A[], int n) {
    for(int i=1; i<=n;i++) {
        int temp = A[i], j = i;
        while(j>0 && temp < A[j-1]) {
            A[j] = A[j-1];
            j--;
        }
        A[j] = temp;
    }
}

struct Student {
    char name[10];
    char id[10];
    int score;
    int r;
}stu[100010];

bool cmp(Student a, Student b) {
    if(a.score != b.score) return a.score > b.score;
    else return strcmp(a.name, b.name)<0;
}

int main() {
    return 0;
}
