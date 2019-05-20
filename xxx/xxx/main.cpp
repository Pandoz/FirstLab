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
		cout << "Неверная операция";
	}

	ifstream file;
	file.open("complex.txt");
	{
	int n;
	file >> n; //чит файл
	int i, m, m1, max = 0; //макс = 0
	ch pv; //структура
	ch *p = new ch[n]; //инициализация указателя
	for (i = 0; i < n; i++)
	{
	file >> m; //счит первое число 
	file >> m1; //счит второе число
	ch s{ m, m1 }; //создаем структуру из этих чисел
		p[i] = s; //присваиваем структуру двух чисел в массив p
		cout << p[i].x << " " << p[i].y << endl; //вывод получ числа
		if (sqrt(p[i].x * p[i].x + p[i].y * p[i].y) > max) //если число больше макс
		{
			max = sqrt(p[i].x * p[i].x + p[i].y * p[i].y); //то макс присваиваем значение этого числа
			pv = p[i];//присваиваем структуре массив p
		}
	}
	
	cout << "Максимальный индекс: ";
	cout << pv.x " + " << pv.y; 
	cout << endl;
	}
	file.close();
	return 0;
}
