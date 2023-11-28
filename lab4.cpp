#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num1, num2;
    cout << "¬вед≥ть перше число: ";
    cin >> num1;
    cout << "¬вед≥ть друге число: ";
    cin >> num2;
    if (num1 == num2)
    {
        cout << "„исла р≥вн≥" << endl;
    }
    else {
        cout << "„исла в пор€дку зростанн€: ";
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