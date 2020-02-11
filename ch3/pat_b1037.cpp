#include<stdio.h>

struct Currency {
    int g, s, k;
    friend bool operator < (Currency l, Currency r) {
        if(l.g<r.g)return true;
        else if(l.g>r.g) return false;
        else {
            if(l.s<r.s)return true;
            else if(l.s>r.s)return false;
            else{
                if(l.k<r.k)return true;
                else return false;
            }
        }
    }
    friend Currency operator - (Currency l, Currency r) {
        Currency ret;
        ret.g=l.g-r.g;
        ret.s=l.s-r.s;
        ret.k=l.k-r.k;
        while(ret.k<0){
            ret.s--;
            ret.k+=29;
        }
        while(ret.s<0) {
            ret.g--;
            ret.s+=17;
        }
        return ret;
    }
}p, a;

int main() {
    scanf("%d.%d.%d %d.%d.%d", &p.g, &p.s, &p.k, &a.g, &a.s, &a.k);
    if(a<p) {
        printf("-");
        Currency t = a;
        a=p;
        p=t;
    }
    Currency ans=a-p;
    printf("%d.%d.%d",ans.g, ans.s, ans.k);
    return 0;
}
