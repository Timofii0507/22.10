#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    cout << "������ ����������� �����: ";
    cin >> num;
    if (num < 100000 || num > 999999)
    {
        cout << "�������! ������ ����������� �����." << endl;
        return 1;
    }
    int digit1 = num / 100000;
    int digit2 = (num / 10000) % 10;
    int digit3 = (num / 1000) % 10;
    int digit4 = (num / 100) % 10;
    int digit5 = (num / 10) % 10;
    int digit6 = num % 10;
    if (digit1 + digit2 + digit3 == digit4 + digit5 + digit6)
    {
        cout << "����� " << num << " - �������!" << endl;
    }
    else
    {
        cout << "����� " << num << " �� � ��������." << endl;
    }

    return 0;
}