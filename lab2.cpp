#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int A, B;
	cout << "¬вед≥ть значенн€: ";
	cin >> A;
	cout << "¬вед≥ть значенн€: ";
	cin >> B;
	int  res = (A < B) ? A : B;
	cout << res << endl;
	return 0;
}