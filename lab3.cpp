#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    cout << "������ �����: ";
    cin >> num;
    if (num > 0)
    {
        cout << "������� ����� � �������!" << endl;
    }
    else if (num < 0)
    {
        cout << "������� ����� � ��'�����!" << endl;
    }
    else {
        cout << "������� ����� ������� ����!" << endl;
    }
    return 0;
}