#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int n = 0;
    int sum =0;
    cin >>n;
    int **a= new int* [n];
    for (int i =0 ; i<n ; i++)
    {
        a[i] = new int [n];
    }
    for (int i =0 ;i<n; i++)
    {
        for (int j=0; j<n; j++)
    }
    a [i][j]= rand()%21;
    cout << a[i][j] << " ";
    if (a[j] %2 ==0 && a[j] !=0)
    {
        sum++;
    }
    cout << endl;
    return 0;
}
