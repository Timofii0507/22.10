#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num1, num2;
    cout << "������ ����� �����: ";
    cin >> num1;
    cout << "������ ����� �����: ";
    cin >> num2;
    if (num1 == num2)
    {
        cout << "����� ���" << endl;
    }
    else {
        cout << "����� � ������� ���������: ";
        if (num1 < num2)
        {
            cout << num1 << ", " << num2;
        }
        else
        {
            cout << num2 << ", " << num1;
        }
        cout << endl;
    }
    return 0;
}