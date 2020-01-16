#include<cstdio>
#include<algorithm>
using namespace std;

int nums[4]={0};
void to_array(int n) {
    for(int i=0;i<4;i++) {
        nums[i]=n%10;
        n/=10;
    }
}

int toNum() {
    int ret=0;
    for(int i=0;i<4;i++) {
        ret=ret*10+nums[i];
    }
    return ret;
}

bool cmp(int a, int b) {
    return a>b;
}

int main() {
    int N;
    scanf("%d", &N);
    int a, b, c=N;
    while(1){
        to_array(c);
        sort(nums, nums+4, cmp);
        a = toNum();
        sort(nums, nums+4);
        b=toNum();
        c = a - b;
        printf("%04d - %04d = %04d\n", a, b, c);
        if(c==0||c==6174)break;
    }
    return 0;
}