#include<stdio.h>
#include<algorithm>
using namespace std;

struct Monomial {
    int p; // 幂次
    double k; // 系数 
};

struct Polynomial{
    int n; // 项数
    Monomial m[1005]; 
    friend Polynomial operator +(Polynomial l, Polynomial r) {
        Polynomial ret;
        int c=0;
        int len1 = l.n;
        int len2 = r.n;
        int i=0, j=0;
        while(i<len1&&j<len2) {
           if(l.m[i].p==r.m[j].p) {
               if(l.m[i].k+r.m[j].k < 1e-20) {
                   i++;
                   j++;
                   continue;
               }
               ret.m[c].p = l.m[i].p;
               ret.m[c++].k = l.m[i++].k + r.m[j++].k;
           } else if(l.m[i].p<r.m[j].p){
               ret.m[c].p = r.m[j].p;
               ret.m[c++].k=r.m[j++].k;
           } else if(l.m[i].p>r.m[j].p) {
               ret.m[c].p = l.m[i].p;
               ret.m[c++].k=l.m[i++].k;
           } 
        }
        while(i<len1){
               ret.m[c].p = l.m[i].p;
               ret.m[c++].k=l.m[i++].k;
        }
        while(j<len2){
               ret.m[c].p = r.m[j].p;
               ret.m[c++].k=r.m[j++].k;
        }
        ret.n = c;
        return ret;
    }
};

int main()
{
    Polynomial A, B;
    scanf("%d", &A.n);
    for(int i=0; i<A.n; i++) {
        scanf("%d%lf", &A.m[i].p, &A.m[i].k);
    }
    scanf("%d", &B.n);
    for(int i=0; i<B.n; i++) {
        scanf("%d%lf", &B.m[i].p, &B.m[i].k);
    }
    Polynomial ans = A+B;
    printf("%d", ans.n);
    for(int i=0; i<ans.n; i++) {
        printf(" %d %.1lf", ans.m[i].p, ans.m[i].k);
    }
    printf("\n");
    return 0;
}
