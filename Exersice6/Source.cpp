#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int x, y, z;
	cout << "\t\t\t���������� ���������� � ���������� if\n";
	cout << endl;
	cout << "������� 1 �����: ";
	cin >> x;
	cout << endl;
	cout << "������� 2 �����: ";
	cin >> y;
	cout << "������� 3 �����: ";
	cin >> z;
	cout << endl;

	if (x == y || x == z || y == z)
	{
		cout << "\n ����� = " << x + 5 << "\n\n" << "2 ����� = " << y + 5 << "\n\n" << "3 ����� = " << z + 5 << endl;
	}
	else
	{
		cout << "\t\t������ ���\n";
	}
	cout << endl;
	return 0;
}