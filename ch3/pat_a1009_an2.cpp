#include<stdio.h>

struct Poly {
    int exp; // 指数
    double cof; // 系数
}poly[1001]; // 第一个多项式

double ans[2001]; // 存放结果

int main() {
    int n, m, number = 0;
    scanf("%d", &n); // 第一个多项式中非0系数的项数
    for(int i=0; i<n; i++) {
        scanf("%d %lf", &poly[i].exp, &poly[i].cof);
    }
    scanf("%d", &m); // 第二个多项式中非0系数的项数
    for(int i=0; i<m; i++) {
        int exp;
        double cof;
        scanf("%d %lf", &exp, &cof); // 第二个多项式的指数和系数
        for(int j=0; j<n; j++) {
            ans[exp+poly[j].exp] += (cof*poly[j].cof);
        }
    }
    for(int i=0; i<=2000; i++) {
        if(ans[i]!=0.0) number++;
    }
    printf("%d", number);
    for(int i=2000; i>=0; i--){
        if(ans[i] != 0.0) {
            printf(" %d %.1f", i, ans[i]);
        }
    }
    return 0;
}
