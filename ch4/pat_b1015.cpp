#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int l,h;

struct Student {
    char exam_no[10];
    int d_score; // 德
    int c_score; // 才
    int rank; // 第几类考生
    friend bool operator < (Student a, Student b) {
        if(a.rank!=b.rank) {
            return a.rank<b.rank;
        }else {
           int a_sum=a.c_score+a.d_score;
           int b_sum=b.c_score+b.d_score;
           if(a_sum!=b_sum) {
               return a_sum>b_sum;
           }else {
               if(a.d_score!=b.d_score){
                   return a.d_score>b.d_score;
               } else {
                   return strcmp(a.exam_no, b.exam_no) < 0;
               }
           }
        }
    }
}stu[100010];

int main() {
    int n;
    scanf("%d%d%d", &n, &l, &h);
    for(int i=0; i<n; i++) {
        scanf("%s%d%d",stu[i].exam_no, &stu[i].d_score, &stu[i].c_score);
        if(stu[i].d_score<l||stu[i].c_score<l)stu[i].rank=5;
        else if(stu[i].d_score>=h&&stu[i].c_score>=h)stu[i].rank=1;
        else if(stu[i].d_score>=h&&stu[i].c_score<h)stu[i].rank=2;
        else if(stu[i].d_score<h&&stu[i].c_score<h&&stu[i].d_score>=stu[i].c_score)stu[i].rank=3;
        else stu[i].rank=4;
    }
    sort(stu, stu+n);
    int m=0; 
    for(int i=0; i<n; i++) {
        if(stu[i].rank<5)m++;
        else break;
    }
    printf("%d\n", m);
    for(int i=0; i<m; i++) {
        printf("%s %d %d\n", stu[i].exam_no, stu[i].d_score, stu[i].c_score);
    }
    return 0;
}