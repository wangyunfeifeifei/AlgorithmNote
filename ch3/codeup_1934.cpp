#include<cstdio>

int main() {
    int n;
    int nums[205];
    int target, targetIdx;
    while(scanf("%d", &n)!=EOF){
        targetIdx = -1;
        for(int i=0;i<n;i++){
            scanf("%d", &nums[i]);
        }
        scanf("%d",&target);
        for(int i=0;i<n;i++){
            if(nums[i] == target) {
                targetIdx = i;
                break;
            }
        }
        printf("%d\n", targetIdx);
    }
    return 0;
}
