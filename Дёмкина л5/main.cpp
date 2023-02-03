#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double V, S, t, a, x, b;
    cout << "S=" ;
    cin >> S;
    cout << "t=";
    cin >> t;
    cout << "a=";
    cin >> a;
    b=(S/2)/a;
    x=t-b;
    V=(S/2)/x;
    cout.precision(3);
    cout << fixed << "b=" << b << endl << "x=" << x << endl << "V=" << V;
    return 0;
}
