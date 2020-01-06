#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

struct Student {
    char registration[15];
    int score;
    int location_num;
    int location_rank;
    int final_rank;
}stu[30005];

bool cmp(Student a, Student b) {
    if(a.score != b.score) return a.score > b.score;
    else return strcmp(a.registration, b.registration) < 0;
}

int main() {
    int N;
    int lstart = 0;
    int lnum = 0;
    int K;
    scanf("%d", &N);
    while(N--) {
        lnum ++;
        scanf("%d", &K);
        for(int i=lstart; i<lstart+K;i++) {
            scanf("%s %d", stu[i].registration, &stu[i].score);
        }
        sort(&stu[lstart], &stu[lstart+K], cmp);
        for(int i=lstart;i<lstart+K;i++) {
            stu[i].location_num = lnum;
            stu[i].location_rank = i-lstart+1;
            if(i>lstart && stu[i].score == stu[i-1].score)stu[i].location_rank = stu[i-1].location_rank;
        }
        lstart+=K;
    }
    sort(&stu[0], &stu[lstart], cmp);
    for(int i=0;i<lstart;i++) {
        stu[i].final_rank = i+1;
        if(i>0&&stu[i].score == stu[i-1].score)stu[i].final_rank = stu[i-1].final_rank;
    }
    printf("%d\n", lstart);
    for(int i=0;i<lstart;i++) {
        printf("%s %d %d %d\n", stu[i].registration, stu[i].final_rank, stu[i].location_num, stu[i].location_rank);
    }
    return 0;
}
