#include <iostream>
#include "Complex.h"

using namespace std;

void p(ch nom1, ch nom2)
{
	ch q; 
	q.x = a.x + b.x; 
	q.y = a.y + b.y; 
	cout << q.x;
	cout << " + ";
	cout << q.y;
}

void m(ch nom1, ch nom2)
{
	ch q;
	q.x = a.x - b.x; 
	q.y = a.y - b.y; 
	cout << q.x;
	cout << " + ";
	cout << q.y;
}


void y(ch nom1, ch nom2)
{
	ch q;
	q.x = a.x * b.x - a.y * b.y;
	q.y = a.x * b.y + a.y * b.x;
	cout << q.x;
	cout << " + ";
	cout << q.y;
}

void d(ch nom1, ch nom2)
{
	ch q;
	q.x = (a.x * b.x + a.y * b.y) / (b.x * a.x + b.y * a.y);
	q.y = (a.x * b.x - a.y * b.y) / (b.x * a.x + b.y * a.y);
	cout << q.x;
	cout << " + ";
	cout << q.y;
}