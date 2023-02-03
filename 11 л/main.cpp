#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int n =2;
    int i, j, a[n][n], sum=0,k;
    srand(time(NULL));
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            a[i][j] = rand()%21;

    cout << "Матрица А:" << endl;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
    for (j=0; j<n; j++)
    {
       k=0;
        for (i=0; i<n; i++)
            if (a[i][j] % 2 == 0)
                k++;
        if (k==n)
            sum++;
    }

    cout << "sum =" <<sum << endl;

    return 0;
}
