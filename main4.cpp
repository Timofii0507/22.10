#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double distance_AB, distance_BC, cargo_weight;
    cout << "Введіть відстань між пунктами A і B (км): ";
    cin >> distance_AB;
    cout << "Введіть відстань між пунктами B і C (км): ";
    cin >> distance_BC;
    cout << "Введіть вагу вантажу (кг): ";
    cin >> cargo_weight;
    if (cargo_weight > 2000) {
        std::cout << "Літак не може підняти вантаж важчий за 2000 кг. Польот неможливий.\n";
        return 0;
    }
    double fuel_consumption;
    if (cargo_weight <= 500) {
        fuel_consumption = 1;
    }
    else if (cargo_weight <= 1000) {
        fuel_consumption = 4;
    }
    else if (cargo_weight <= 1500) {
        fuel_consumption = 7;
    }
    else {
        fuel_consumption = 9;
    }
    double fuel_required_AB = distance_AB * fuel_consumption;
    double fuel_required_BC = distance_BC * fuel_consumption;
    double total_fuel_required = fuel_required_AB + fuel_required_BC;
    if (total_fuel_required > 300) {
        cout << "Літак не зможе подолати обидві відстані з вказаною кількістю палива. Польот неможливий.\n";
    }
    else {
        cout << "Мінімальна кількість палива для подолання відстаней в пунктах B: " << total_fuel_required << " літрів\n";
    }
    return 0;
}