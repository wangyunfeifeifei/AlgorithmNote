#include<stdio.h>

const long long Galleon=29*17;
const long long Sickle=29;

int main() {
    int g1, s1, k1;
    int g2, s2, k2;
    scanf("%d.%d.%d %d.%d.%d", &g1, &s1, &k1, &g2, &s2, &k2);
    long long ans=g1*Galleon+g2*Galleon+s1*Sickle+s2*Sickle+k1+k2;
    printf("%lld.%lld.%lld", ans/Galleon, (ans/Sickle)%17, ans%29);
    return 0;
}
