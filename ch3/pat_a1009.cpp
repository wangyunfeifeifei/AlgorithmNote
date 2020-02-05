#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;

struct Monomial {
    int p; // 幂次
    double k; // 系数
    Monomial(){
        k=0;
    }
};

bool cmp(Monomial a, Monomial b) {
    return a.p>b.p;
}

struct Polynomial{
    int n; // 项数
    Monomial m[105];
    friend Polynomial operator *(Polynomial l, Polynomial r) {
        Polynomial ret;
        int cnt=0;
        int len1 = l.n;
        int len2 = r.n;
        bool flag = true;
        for(int i=0; i<len1; i++) {
            for(int j=0; j<len2; j++) {
                flag = true;
                int t = l.m[i].p + r.m[j].p;
                for(int s=0; s<cnt; s++) {
                    if(ret.m[s].p == t){
                       ret.m[s].k+=l.m[i].k*r.m[j].k; // 这一步可能导致0系数 
                       flag = false;
                    } 
                }    
                if(flag) {
                    ret.m[cnt].p = t;
                    ret.m[cnt++].k+=l.m[i].k*r.m[j].k;
                }
            }
        }
        ret.n = cnt;
        ret.sortM();
        ret.removeZero();
        return ret;
    }
    // 按降幂排列
    public: void sortM() {
        sort(m, m+n, cmp);
    }
    // 去除0多项式
    public: void removeZero() {
        for(int i=0; i<n; i++) {
            while(fabs(m[i].k)<1e-5) {
                for(int j=i; j<n-1; j++) {
                    m[j]=m[j+1];
                }
                n--;
            }
        }
    }
};

int main() {
    Polynomial A, B;
    scanf("%d", &A.n);
    for(int i=0; i<A.n; i++) {
        scanf("%d%lf", &A.m[i].p, &A.m[i].k);
    }
    scanf("%d", &B.n);
    for(int i=0; i<B.n; i++) {
        scanf("%d%lf", &B.m[i].p, &B.m[i].k);
    }
    Polynomial ans = A*B;
    printf("%d", ans.n);
    for(int i=0; i<ans.n; i++) {
        double t = ans.m[i].k;
        printf(" %d %.1f", ans.m[i].p, t);
    }
    printf("\n");
    return 0;
}
