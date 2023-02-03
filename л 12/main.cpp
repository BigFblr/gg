#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int i, P, j, m, n, **A, *B,z=0;
    cout << "Введите m и n: ";
    cin >> m >> n;
    A= new int *[m];
    for (i=0; i<m; i++)
        A[i]=new int[n];
    cout << " Матрица A:" << endl;
    for (i=0; i<m; i++)
    {
        for (j=0; j < n; j++)
        {
            A[i][j]=rand() %21-10;
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    B = new int[n];
    cout << "произведение отрицательных элементов :" << endl;
    for (j=0; j<n; j++)
    { z=0;
    for (P=1, i=0; i < m; i++)
   {
    if (A[i][j] <0)

   {
      P *= A[i][j];
      z=1;
   }

    }
      if (z==1)
      B[j]=P;
else
    B[j]=0;
     }

     for (j=0; j<n; j++)
        cout << B[j] << ", ";
        cout << "\b\b " << endl;
     for  (i=0; i<m; i++)
delete []A[i];
        delete []A;
     delete []B;
    return 0;
}
