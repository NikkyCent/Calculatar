#include <iostream>
#include "Vector.h"

Vector::Vector()
{

}
Vector::Vector(int &ax1, int &ax2, int &ax3, int &bx1, int &bx2, int &bx3)
{
	a1 = bx1 - ax1;
	a2 = bx2 - ax2;
	a3 = bx3 - ax3;
	l = 0;
	scal = 0;
	cos = 0;
}
Vector::~Vector()
{

}
void Vector:: lVect()
{
	l = sqrt(pow(a1, 2) + pow(a2, 2) + pow(a3, 2));


}
Vector Vector:: Plus(Vector &b)
{
	Vector c;
	c.a1 = this->a1 + b.a1;
	c.a2 = this->a2 + b.a2;
	c.a3 = this->a3 + b.a3;
	return c;

}
Vector Vector:: Minus(Vector &b)
{
	Vector c;
	c.a1 = this->a1 - b.a1;
	c.a2 = this->a2 - b.a2;
	c.a3 = this->a3 - b.a3;

	return c;

}
void Vector:: scal1(Vector &a, Vector &b)
{
	scal = a.a1*b.a1 + a.a2*b.a2 + a.a3*b.a3;
}
void Vector:: cos1(Vector &a, Vector &b)
{
	a.lVect();
	b.lVect();
	scal1(a, b);

	cos = scal / (a.l*b.l);

	cout << "Cos угла между векторами: " << cos << endl;
}
void Vector:: getl()
{
	lVect();
	cout << "Длина вектора " << l;
}
void Vector:: getscal(Vector &a, Vector &b)
{
	scal1(a, b);
	cout << "Скалярное произведение: " << scal << endl;
}
void Vector:: get()
{
	cout << "Координаты вектора " << a1 << ", " << a2 << ", " << a3 << endl;
}