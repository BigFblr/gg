#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    int C;
    cout << "������� �������� ���������� ��������:" << endl;
    cin >> C;
    int N, M;
    cout << "������� �������� ������� ��������:" << endl;
    cin >> N >> M;
    switch (C+N+M)
    {
    case 1:
    case 5:
        cout << "�����";
        break;
    case 2:
    case 6:
        cout << "�����";
        break;
    case 3:
    case 7:
        case -1:
        cout << "��";
        break;
    case 4:
    case 8:
        cout << "������";
        break;
    }

    return 0;
}
