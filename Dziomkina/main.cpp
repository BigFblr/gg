#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    double x, y, z, a;
    printf("Input x,y,z:\n");
    scanf("%lf%lf%lf", &x, &y, &z);
    a=(pow(y, (x+1))/((cbrt(fabs(y-M_E))))+M_PI)+(x+(y/M_E))/(M_E+fabs((x/M_PI)+y))*pow((x+1), -1/sin(z));
    printf("a=%5.6lf", a);
    return 0;

}
