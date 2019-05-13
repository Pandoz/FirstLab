#include <iostream>
#include <fstream>
#include "complex.h"

using namespace std;

int main()
{
	char o;
	double x1, x2, y1, y2;

	cout << "Первое число: ";
	cin >> x1;
	cin >> y1;

	cout << "Второе число: ";
	cin >> x2;
	cin >> y2;

	ch nom1 = { x1, y1 };
	ch nom2 = { x2, y2 };

	cout << "Операция: ";
	cin >> o;

	switch (o)
	{
	case '+':
		p(nom1, nom2);
		break;
	case '-':
		m(nom1, nom2);
		break;
	case '*':
		y(nom1, nom2);
		break;
	case '/':
		d(nom1, nom2);
		break;

	default:
		cout << "Попробуйте снова";
	}

	ifstream file;
	file.open("complex.txt");
	{
		int c, max, ind;
		file >> c; //счит файл
		int р, n;
		ch* p = new ch[n]; //массив чисел

		for (int i = 0; i < n; i++)
		{
			file >> c; //первое число
			p[i].x = c;
			file >> c;
			p[i].y = c;  //ВТОРОЕ
			cout << i + 1 << " число: " << p[i].x << " + (" << p[i].y << ")i\n";  //вывод числа
			max = 0; //макс индекс пока равен нулю
			if (sqrt(p[i].x * p[i].x + p[i].y * p[i].y) > max)  //если число больше макс то числло = макс
			{
				max = sqrt(p[i].x * p[i].x + p[i].y * p[i].y);
				ind = i;
			}
		}
		cout << "Комплексное число с максимальным модулем: " << p[ind].x << " + (" << p[ind].y << ")i\n"; //макс модуль
	}
	file.close();
	return 0;
}