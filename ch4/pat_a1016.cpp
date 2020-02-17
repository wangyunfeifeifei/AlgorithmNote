#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

int charge[24] = {0};

struct Record {
    char name[25];
    char time[25];
    bool isOnline;
}r[1010];

bool cmp(Record a, Record b) {
    if(strcmp(a.name, b.name)==0) {
        return strcmp(a.time, b.time) < 0;
    }
    return strcmp(a.name, b.name) < 0;
}

int main() {
    for(int i=0; i<24; i++) {
        scanf("%d", &charge[i]);
    }
    char name[25],time[25], type[15];
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%s%s%s", name, time, type);
        if(strcmp("on-line", type)==0) r[i].isOnline=true;
        else r[i].isOnline=false;
        strcpy(r[i].name, name);
        strcpy(r[i].time, time);
    }
    sort(r, r+n, cmp);
    char now[25];
    strcpy(now, r[0].name);
    int M,d,h,m, sum=0;
    int M1, d1, h1, m1;
    bool flag=false;
    for(int i=0; i<n; i++) {
        if(strcmp(r[i].name, now)!=0){
            if(sum!=0)
                printf("Total amount: $%.2f\n", sum/100.0);
            strcpy(now, r[i].name);
            flag=false;
            sum=0;
        } 
        if(i+1<n&&r[i].isOnline&&!r[i+1].isOnline&&strcmp(r[i].name,r[i+1].name)==0) {
            sscanf(r[i].time, "%d:%d:%d:%d", &M, &d, &h, &m);
            sscanf(r[i+1].time, "%d:%d:%d:%d", &M1, &d1, &h1, &m1);
            if(!flag) {
                printf("%s %02d\n", now, M);
                flag=true;
            } 
            printf("%s %s", r[i].time+3, r[i+1].time+3);
            int time=0;
            int money=0;
            while(d<d1||h<h1||m<m1) {
                time++;
                m++;
                money+=charge[h]; 
                if(m>=60){
                    m=0;
                    h++;
                }
                if(h>=24) {
                    h=0;
                    d++;
                }
            }
            sum+=money;
            printf(" %d $%.2f\n", time, money/100.0);
        } else continue; 
    }
    if(sum!=0)
        printf("Total amount: $%.2f\n", sum/100.0);
    return 0;
}