#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int x, y, z;
	cout << "\t\t\tУвеличение переменных с оператором if\n";
	cout << endl;
	cout << "Введите 1 число: ";
	cin >> x;
	cout << endl;
	cout << "Введите 2 число: ";
	cin >> y;
	cout << "Введите 3 число: ";
	cin >> z;
	cout << endl;

	if (x == y || x == z || y == z)
	{
		cout << "\n Число = " << x + 5 << "\n\n" << "2 число = " << y + 5 << "\n\n" << "3 число = " << z + 5 << endl;
	}
	else
	{
		cout << "\t\tРавных нет\n";
	}
	cout << endl;
	return 0;
}