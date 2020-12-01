#include "f1.h"
double f2(double a, double b, double h, double y) {
    double ans = -1000000000000;
    double x = -1;
    double i = a;
    while (i <= b)
    {
        if (obsh(a, b, i, y) > ans) {
            ans = obsh(a, b, i, y);
            x = i;
        }
        i = i + h;
    }
    return x;
}