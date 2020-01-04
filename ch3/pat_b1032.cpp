#include<cstdio>

int main() {
    int school[100005] = {0};
    int n;
    scanf("%d", &n);
    int idx, score;
    int maxScore = 0, maxIdx=0;
    for(int i=0;i<n;i++){
        scanf("%d%d", &idx, &score);
        school[idx] += score;
        if(school[idx]>maxScore) {
            maxIdx = idx;
            maxScore = school[idx];
        }
    }
    printf("%d %d\n", maxIdx, maxScore);
    return 0;
}
