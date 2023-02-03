#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
void multab (int);
double pr(int);


int main() {
    int n,i,c,z,p;
    for (i=0;i<=4;i++)
{

    cout << "Input n:" << endl;
    cin >> n;
    cout << "p =" << pr(n) << endl;
}

    return 0;
}

 double pr(int n)

 {int i; double c=2, z=1, p=2;

   for (i=2; i<=n; i++)
   {

       if(i%2)
       c+=2;
       else
       z+=2;
       p*=(c/z);

   }
   return p;
 }

