#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "RUS");
    double x, y, a, b, h;
    cout << "¬ведите a" << endl;
    cin >> a;
    cout << "¬ведите b" << endl;
    cin >> b;
    cout << "¬ведите h" << endl;
    cin >> h;
    cout << "x\ty" << endl;
    for (x=a; x<=b; x+=h)
    {
    if (x<2)
        y=x;
    else if (x<=4)
        y=log(x);
    else
        y=sin(M_PI*x/2);
    cout << x << "\t" << y << endl;
    }


    return 0;
}
