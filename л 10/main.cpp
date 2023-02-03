#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int P, e=-1, i, a[5];
    srand(time(NULL));
    for(i=0;i<5;i++)
    a[i] = rand()%11-5;
    cout << "Массив А{";
    for (i=0; i<5; i++)
    cout << a[i] << ",";
    cout << "\b}" << endl;
    for (i=0; i<5; i++)
        if (a[i]==0)
            e=i;
    //cout << "i=" << e;
    if (e!=-1 && e<4)
    {P=1;
    for (i=e+1; i<5; i++)
        P = P*a[i];
    cout << "\tP=" << P;
    }
    else if (e==4)
        cout << "ноль последний" << endl;
    else
        cout << "нулей нет" << endl;
    return 0;
}
