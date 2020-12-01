#include<cmath>
double min(double a, double b) {
    if (a > b)
        return b;
    return a;
}
double max(double a, double b) {
    if (a < b)
        return b;
    return a;
}
double case1(double a, double x, double y) {
    return min(a * x, min(y, max(sqrt(x), sin(y))));
}
double case2(double b, double x, double a, double y) {
    return (b + 2 * x) / pow(2.71828, a * y);
}
double obsh(double a, double b, double x, double y) {
    return x <= 0 && y > 2 ? case1(a, x, y) : case2(b, x, a, y);
}