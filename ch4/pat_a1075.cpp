#include<stdio.h>
#include<algorithm>
using namespace std;

int n,k,m;
int p[10] = {0};

struct Student {
    int s_id;
    int rank;
    int per_num;
    int flag;
    int sb[10];
    Student() {
        flag=false;
        per_num=0;
        for(int i=0; i<10; i++) {
            sb[i]=-1;
        }
    }
    int total() {
        int ret=0;
        for(int i=1; i<=k; i++) {
            if(sb[i]!=-1) {
                ret+=sb[i];
            }
        }
        return ret;
    }
    friend bool operator < (Student a, Student b) {
        int t_a=a.total(), t_b=b.total();
        if(t_a!=t_b)return t_a>t_b;
        else if(a.per_num!=b.per_num)return a.per_num>b.per_num;
        else return a.s_id<b.s_id;
    }
}stu[10010];

int main() {
    scanf("%d%d%d", &n, &k, &m);
    for(int i=1; i<=k; i++) {
        scanf("%d", &p[i]);
    }
    for(int i=1; i<=n; i++) {
        stu[i].s_id=i;
    }
    int t_s, t_p, t_score;
    for(int i=0; i<m; i++) {
       scanf("%d%d%d", &t_s, &t_p, &t_score);
       if(t_score!=-1)stu[t_s].flag=true;
        if(t_score==-1&&stu[t_s].sb[t_p]==-1)stu[t_s].sb[t_p]=0;
        if(stu[t_s].sb[t_p] < t_score) {
            
            stu[t_s].sb[t_p]=t_score;
            if(t_score==p[t_p]) {
                stu[t_s].per_num++;
            }
        }
    }
    sort(stu+1, stu+n+1);
    for(int i=1; i<=n; i++) {
        int total=stu[i].total();
        if(stu[i].flag) {
           if(i>1&&total==stu[i-1].total())stu[i].rank=stu[i-1].rank; 
           else stu[i].rank=i;
            printf("%d %05d %d", stu[i].rank, stu[i].s_id, total);
           for(int j=1; j<=k; j++) {
               if(stu[i].sb[j]!=-1){
                   printf(" %d", stu[i].sb[j]);
               }else{
                   printf(" -");
               }
           } 
           printf("\n");
        } 
    }
    return 0;
}
