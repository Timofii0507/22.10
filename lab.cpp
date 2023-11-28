#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    cout << "Введіть значення: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num << " є  парним  числом!" << endl;
    }
    else
    {
        cout << num << " не  є панрим  числом!" << endl;
    }
    return 0;
}