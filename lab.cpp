#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    cout << "������ ��������: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num << " �  ������  ������!" << endl;
    }
    else
    {
        cout << num << " ��  � ������  ������!" << endl;
    }
    return 0;
}