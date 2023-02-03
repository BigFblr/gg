#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
    int i,n;
    double a, b, x, p = 1;
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    cout << "¬ведите x:";
    cin>> x ;
    n = 6;
    for (i=1; i<=n; i++)
    {
        a = pow(sin(i*x),2)+x;
        b = cos(pow(i,2));
        p *= a/b;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        ;
    }
    cout << "p=" << p;
    return 0;
}
