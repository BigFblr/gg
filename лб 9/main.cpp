#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

int main()
{
    int n = 0;
    double a, b, c, x, s, e, S = 0;
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    cout << "¬ведите x и точность e: ";
    cin >> x >> e;
    a = 1;
    b = pow(x/2,n);
    c = 1;
    s = a*b/c;
    while(fabs(s) > e)
{
    S += s;
    n++;
    a = pow(n,2)+1;
    b *= x/2;
    c *= n;
    s = a*b/c;
}
    cout << "s=" << S;
    return 0;
}
