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
			ifstream file;
	file.open("complex.txt");
	{
		int c, d, d1, max, n;
		file >> c; //считываем файл
	
		ch w;
		ch *p = new ch[n]; //массив чисел

		for (int i = 0; i < n; i++)
		{
			file >> d; //первое число
			file >> d1; //второе число
			ch l { d, d1 }; //комплекс число
			p[i] = l; //присваиваем структуру из двух чисел из файла
			cout << " число: " << p[i].x ;
			cout << " + ";
			cout << p[i].y;   //вывод числа полученного от двух чисел
			max = 0; //макс индекс пока равен нулю
			if (sqrt(p[i].x * p[i].x + p[i].y * p[i].y) > max)  //если число больше макс то числло = макс
			{
				max = sqrt(p[i].x * p[i].x + p[i].y * p[i].y); //заполняем след структрпрй чисел числом
			}
		}
		cout << "Комплексное число с максимальным модулем: " << p[i].x << " + (" << p[i].y << ")i\n"; //макс модуль
	}
	file.close();
	return 0;
}
