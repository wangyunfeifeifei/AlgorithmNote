#include<cstdio>

int chToI(char c) {
    if(c=='B')return 0;
    if(c=='C')return 1;
    return 2;
}

int maxIndex(int a[], int n) {
    int max=0;
    int maxI = 0;
    for(int i=0;i<n;i++) {
        if(a[i]>max){
            max=a[i];
            maxI = i;
        }
    }
    return maxI;
}

int main() {
    char mp[3] = {'B', 'C', 'J'};
    int time_A[3]={0}, time_B[3]={0};
    int n;
    int win[3]={0}; // 甲胜利， 甲平， 甲败
    scanf("%d", &n);
    char temp1, temp2;
    while(n--) {
        getchar();
        scanf("%c %c", &temp1, &temp2);
        int ka = chToI(temp1);
        int kb = chToI(temp2);
        if((ka+1)%3==kb) {
            // 甲胜利
            time_A[ka] ++;
            win[0]++;
        } else if(ka == kb) {
            // 平手
            win[1]++;
        } else if((kb+1)%3==ka) {
            // 乙胜利
            time_B[kb]++;
            win[2]++;
        }
    }
    printf("%d %d %d\n", win[0], win[1], win[2]);
    printf("%d %d %d\n", win[2], win[1], win[0]);
    printf("%c %c\n", mp[maxIndex(time_A, 3)], mp[maxIndex(time_B, 3)]);
    return 0;
}
