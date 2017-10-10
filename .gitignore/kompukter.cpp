#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double q, w;
	double sum, razn, pr, del;
	cout << "Введите первое число: ";
	cin >> q;
	cout << "Введите второе число: ";
	cin >> w;

	sum = q + w;
	razn = q - w;
	pr = q*w;
	del = q / w;

	cout << "Сумма: ";
	cout << sum << endl;
	cout << "Разность: ";
	cout << razn << endl;
	cout << "Произведение: ";
	cout << pr << endl;
	cout << "Частное: ";
	cout << del << endl;
	system("pause");
 
	return 0;
}
