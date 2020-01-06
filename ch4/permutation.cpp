// 生成全排列
#include<cstdio>
const int maxn = 11;

int n, p[maxn], hashTable[maxn] = {false};
// 当前处理排列的第index号位
void generateP(int index) {
    if(index == n+1) {
        for(int i=1; i<=n; i++) {
            printf("%d", p[i]); // 输入当前排列
        }
        printf("\n");
        return;
    }
    for(int x=1; x<=n; x++) {
        if(hashTable[x] == false) { // 如果x不在p[0]~p[index-1]中
            p[index] = x; // 令P的第index位为x， 即把x加入当前排列
            hashTable[x] = true;
            generateP(index + 1);
            hashTable[x] = false;
        }
    }
}

int main() {
    n = 3;
    generateP(1); // 从P[1]开始填
    return 0;
}
