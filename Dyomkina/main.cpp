#include <stdio.h>
#include <math.h>
#include <iostream>


using namespace std;

int main()
{
    double x, y, z, a, d, t, p, r, s;
    printf("Input x,y,z:\n");
    scanf("%lf%lf%lf", &x, &y, &z);
    a=pow(y, (x+1));
    cout << fixed << "a=" << a << endl;
    d=(cbrt(fabs(y-M_E)))+M_PI;
    cout << fixed << "d=" << d << endl;
    t=x+(y/M_E);
    cout << fixed << "t=" << t << endl;
    p=M_E+fabs((x/M_PI)+y);
    cout << fixed << "p=" << p << endl;
    r=pow((x+1), -(1/sin(z)));
    cout << fixed << "r=" << -(1/sin(z)) << endl;
    s=((a/d)+(t/p))*r;
    cout << fixed << "s=" << s << endl;

    return 0;

}
