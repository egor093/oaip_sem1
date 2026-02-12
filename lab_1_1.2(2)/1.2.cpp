#include <iostream>
#include <windows.h>
using namespace std;
double f(double x) 
{
    return pow(x, 2) + 1/x;
}
double findRoot(double a, double b, double e, double (*func)(double)) 
{
    double c;
    while ((b - a) > e) 
    {
        c = (a + b) / 2;
        if (abs(func(c)) < e) 
        { 
            break;
        }
        if (func(a) * func(c) < 0) 
        {
            b = c; 
        }
        else
        {
            a = c;
        }
    }
    return c;
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a, b, e = 0.001;
    cout << "Введите интервал, на котором программа будет искать корни." << endl << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << endl;
    if (f(a) * f(b) > 0) {
        cout << "На этом интервале нет корней или их больше, чем один." << endl;
        return 0;
    }
    double root = findRoot(a, b, e, f);
    cout << "Корень: " << root << endl;
    cout << "Значение функции в корне: " << f(root) << endl;
    return 0;
}
