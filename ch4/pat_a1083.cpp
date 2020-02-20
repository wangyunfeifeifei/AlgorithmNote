#include<stdio.h>
#include<algorithm>
using namespace std;

struct Records {
    char name[15];
    char id[15];
    int grade;
    friend bool operator < (Records a, Records b) {
        return a.grade >= b.grade;
    }
}record[10010];

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%s%s%d", record[i].name, record[i].id, &record[i].grade);
    }
    int l, r;
    scanf("%d%d", &l, &r);
    int cnt=0;
    sort(record, record+n);
    for(int i=0; i<n; i++) {
        if(record[i].grade>=l && record[i].grade<=r) {
            printf("%s %s\n", record[i].name, record[i].id);
            cnt++;
        }
    }
    if(cnt==0)printf("NONE\n");
    return 0;
}