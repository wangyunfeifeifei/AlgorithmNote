#include<stdio.h>

struct Student {
    char exam_no[20];
    int test_pos; // 试机座位号
    int exam_pos; // 考试座位
}stus[1010];
Student t_s[1010]; // 试机座位-学生对应关系 

int main() {
    int N;
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%s %d %d", stus[i].exam_no, &stus[i].test_pos, &stus[i].exam_pos);
        t_s[stus[i].test_pos] = stus[i];
    }
    int M;
    scanf("%d", &M);
    for(int i=0; i<M; i++) {
        int t;
        scanf("%d", &t);
        Student st = t_s[t];
        printf("%s %d\n", st.exam_no, st.exam_pos);
    } 
    return 0;
}