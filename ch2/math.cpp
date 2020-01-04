#include<cstdio>
#include<cmath>

const double pi = acos(-1.0); // 定义π

int main() {
    double db = - 12.56;
    printf("%.2f\n", fabs(db)); // fabs()对浮点数取绝对值
    double db1 = -5.2, db2 = 5.2;
    printf("%.0f %.0f\n", floor(db1), ceil(db1)); // floor() 向下取整
    printf("%.0f %.0f\n", floor(db2), ceil(db2)); // ceil() 向上取整
    
    printf("%f\n", pow(2.0, 3.0)); // pow(r, p) 返回r的p次方

    printf("%f\n", log(1.0)); // log(x) 返回 lnx C中没有任意底数的对数，只有通过换底公式实现

    printf("%f, %f, %f\n", sin(pi*45/180), cos(pi*45/180), tan(pi*45/180)); // sin() cos() tan()

    printf("%f, %f, %f\n", asin(1), acos(-1), atan(0)); // arcsin() arccos() arctan()

    printf("%f\n", round(3.56)); // round() 进行四舍五入
    return 0;
}
