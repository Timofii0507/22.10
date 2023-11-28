#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double distance_AB, distance_BC, cargo_weight;
    cout << "������ ������� �� �������� A � B (��): ";
    cin >> distance_AB;
    cout << "������ ������� �� �������� B � C (��): ";
    cin >> distance_BC;
    cout << "������ ���� ������� (��): ";
    cin >> cargo_weight;
    if (cargo_weight > 2000) {
        std::cout << "˳��� �� ���� ������ ������ ������ �� 2000 ��. ������ ����������.\n";
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
        cout << "˳��� �� ����� �������� ����� ������ � �������� ������� ������. ������ ����������.\n";
    }
    else {
        cout << "̳������� ������� ������ ��� ��������� �������� � ������� B: " << total_fuel_required << " ����\n";
    }
    return 0;
}