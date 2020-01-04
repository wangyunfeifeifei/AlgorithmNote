#include<cstdio>
#include<cmath>

int main() {
    double a,b,c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double delta = b*b - 4*a*c;
    printf("r1=%7.2f\nr2=%7.2f\n", (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));
    return 0;
}
