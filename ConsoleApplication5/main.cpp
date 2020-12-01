// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "f2.h"
using namespace std;

int main()
{
    double y, a, b, h;
    cin >> a >> b >> h >> y;
    if (h <= 0 || h > (a - b) / 2 || a < b)
        return 0;
    cout << f2(a, b, h, y);
    return 0;
}