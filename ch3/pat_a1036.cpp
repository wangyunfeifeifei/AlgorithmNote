#include<stdio.h>

struct Student {
    char name[15];
    char gender;
    char id[15];
    int grade;
}stu, lowest, highest;

int main() {
    lowest.grade=100;
    highest.grade=0;
    int n, boy_n=0, girl_n=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%s %c%s%d", stu.name, &stu.gender, stu.id, &stu.grade);
        if(stu.gender == 'M') {
            boy_n++;
            if(stu.grade <= lowest.grade)lowest=stu;
        } else if(stu.gender == 'F') {
            girl_n++;
            if(stu.grade >= highest.grade)highest=stu;
        }
    }
    if(boy_n==0||girl_n==0) {
        if(girl_n>0)printf("%s %s\n", highest.name, highest.id);
        else printf("Absent\n");
        if(boy_n>0)printf("%s %s\n", lowest.name, lowest.id);
        else printf("Absent\n");
        printf("NA\n");
    } else {
        printf("%s %s\n%s %s\n", highest.name, highest.id, lowest.name, lowest.id);
        printf("%d\n", highest.grade-lowest.grade);
    }
    return 0;
}