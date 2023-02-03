#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    int C;
    cout << "Введите исходную ориентацию локатора:" << endl;
    cin >> C;
    int N, M;
    cout << "Введите цифровую команду поворота:" << endl;
    cin >> N >> M;
    switch (C+N+M)
    {
    case 1:
    case 5:
        cout << "Север";
        break;
    case 2:
    case 6:
        cout << "Запад";
        break;
    case 3:
    case 7:
        case -1:
        cout << "Юг";
        break;
    case 4:
    case 8:
        cout << "Восток";
        break;
    }

    return 0;
}
