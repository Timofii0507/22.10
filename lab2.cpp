#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int A, B;
	cout << "������ ��������: ";
	cin >> A;
	cout << "������ ��������: ";
	cin >> B;
	int  res = (A < B) ? A : B;
	cout << res << endl;
	return 0;
}