#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int c;
struct Student {
    int id;
    char name[10];
    int grade;
    friend bool operator < (Student a, Student b) {
        switch(c){
            case 1:
               return a.id<b.id; 
            case 2:
                return strcmp(a.name, b.name)<=0;
            case 3:
                return a.grade<=b.grade;
        }
        return true;
    }
}stu[100010];

int main() {
    int n;
    scanf("%d%d", &n, &c);
    for(int i=0; i<n; i++) {
        scanf("%d%s%d", &stu[i].id, &stu[i].name, &stu[i].grade);
    }
    sort(stu, stu+n);
    for(int i=0; i<n; i++) {
        printf("%06d %s %d\n", stu[i].id, stu[i].name, stu[i].grade);
    }
    return 0;
}