#include<stdio.h>

struct Student {
    char name[20];
    char stu_no[20];
    int score;
}stu, best, last;

int main() {
    int n;
    scanf("%d", &n);
    best.score = 0;
    last.score = 100;
    for(int i=0; i<n; i++) {
        scanf("%s %s %d", stu.name, stu.stu_no, &stu.score);
        if(stu.score>=best.score)best = stu; 
        if(stu.score<=last.score)last = stu;
    }
    printf("%s %s\n%s %s\n", best.name, best.stu_no, last.name, last.stu_no);
    return 0;
}