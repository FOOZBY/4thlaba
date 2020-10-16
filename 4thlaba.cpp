#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(0, "");
    double a,b,c = 0;
    char oper,cont='Y';
	bool cor = 0;
	string temp, as, bs;
    while (cont == 'Y' || cont == 'y')
    {
        cout << "Введите первое число: ";
		cor = 0;
		while (!cor)
		{
			cin >> as;
			int i;
			for (i = 0; i < as.length(); i++)
			{
				if (int(as[i]) < 48 || int(as[i]) > 57)
				{
					break;
				}
			}
			if (i == as.length())
			{
				cor = 1;
				a = stoi(as);
			}
			else
			{
				cin.clear();
				cin.ignore(32767, '\n');
				cout << "Не верный ввод!!! Введите число : ";
			}
		}
        cout << "Введите знак оперции(+,-,*,/): ";
        cin >> oper;
        cout << "Введите второе число: ";
		cor = 0;
		while (!cor)
		{
			cin >> bs;
			int i;
			for (i = 0; i < bs.length(); i++)
			{
				if (int(bs[i]) < 48 || int(bs[i]) > 57)
				{
					break;
				}
			}
			if (i == bs.length())
			{
				cor = 1;
				b = stoi(bs);
			}
			else
			{
				cin.clear();
				cin.ignore(32767, '\n');
				cout << "Не верный ввод!!! Введите число : ";
			}
		}
        if (oper == '/' && b == 0)
        {
            cout << "деление на ноль невозможно" << endl;
		}
		else
		{
			switch (oper)
			{
			case '+':
				c = a + b;
				cout << " = " << c << endl;
				break;
			case '-':
				c = a - b;
				cout << " = " << c << endl;
				break;
			case '/':
				c = a / b;
				cout << " = " << c << endl;
				break;
			case '*':
				c = a * b;
				cout << " = " << c << endl;
				break;
			default:
				cout << "недопустимая операция" << endl;
				break;
			}
		}
		cout << "Желаете продожлить? (Y-да,любой другой символ-нет): ";
		cin >> cont;
		system("cls");
		cout << "Предыдущее значение: " << c << endl;
    }
}