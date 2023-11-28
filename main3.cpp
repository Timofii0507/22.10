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
        std::cout << "Введіть ціле число: ";
        std::cin >> number;
        if (number > maxNumber) {
            maxNumber = number;
        }
    }
    std::cout << "Максимальне число: " << maxNumber << std::endl;
    return 0;
}