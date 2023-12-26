#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double distance_AB, distance_BC, cargo_weight;
    cout << "Ââåä³òü â³äñòàíü ì³æ ïóíêòàìè A ³ B (êì): ";
    cin >> distance_AB;
    cout << "Ââåä³òü â³äñòàíü ì³æ ïóíêòàìè B ³ C (êì): ";
    cin >> distance_BC;
    cout << "Ââåä³òü âàãó âàíòàæó (êã): ";
    cin >> cargo_weight;
    if (cargo_weight > 2000) {
        cout << "Ë³òàê íå ìîæå ï³äíÿòè âàíòàæ âàæ÷èé çà 2000 êã. Ïîëüîò íåìîæëèâèé.\n";
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
        cout << "Ë³òàê íå çìîæå ïîäîëàòè îáèäâ³ â³äñòàí³ ç âêàçàíîþ ê³ëüê³ñòþ ïàëèâà. Ïîëüîò íåìîæëèâèé.\n";
    }
    else {
        cout << "Ì³í³ìàëüíà ê³ëüê³ñòü ïàëèâà äëÿ ïîäîëàííÿ â³äñòàíåé â ïóíêòàõ B: " << total_fuel_required << " ë³òð³â\n";
    }
    return 0;
}
