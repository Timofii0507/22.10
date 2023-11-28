#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    cout << "¬вед≥ть число: ";
    cin >> num;
    if (num > 0)
    {
        cout << "¬ведене число Ї додатн≥м!" << endl;
    }
    else if (num < 0)
    {
        cout << "¬ведене число Ї в≥д'Їмним!" << endl;
    }
    else {
        cout << "¬ведене число дор≥внюЇ нулю!" << endl;
    }
    return 0;
}