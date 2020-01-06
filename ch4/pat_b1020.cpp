#include<cstdio>
#include<algorithm>
using namespace std;

struct Mooncake{
    double stock;
    double price;
    double pqRatio; // 性价比, 每吨多少钱
}mc[1005];

bool cmp(Mooncake a, Mooncake b) {
    return a.pqRatio > b.pqRatio;
}

int main() {
    int N, D;
    scanf("%d%d", &N, &D);
    for(int i=0;i<N;i++) {
        scanf("%lf", &mc[i].stock);
    }
    for(int i=0;i<N;i++) {
        scanf("%lf", &mc[i].price);
        mc[i].pqRatio = (mc[i].price*1.0) / mc[i].stock;
    }
    sort(mc, mc+N, cmp);
    double sum = 0;
    for(int i=0;i<N&&D>0;i++) {
        if(D>=mc[i].stock) {
            D-=mc[i].stock;
            sum += mc[i].price;
        } else {
            sum += D*mc[i].pqRatio;
            D=0;
        }
    }
    printf("%.2lf\n", sum);
    return 0;
}
