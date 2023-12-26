#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;
    int maxNumber = INT_MIN;
    for (int i = 0; i < 7; ++i) {
        cout << "Ââåä³òü ö³ëå ÷èñëî: ";
        cin >> number;
        if (number > maxNumber) {
            maxNumber = number;
        }
    }
    cout << "Ìàêñèìàëüíå ÷èñëî: " << maxNumber << endl;
    return 0;
}
