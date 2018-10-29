#pragma once
#include <iostream>
using namespace std;
class Vector
{
private:
	int	a1, a2, a3;
	double l, scal, cos;

public:
	Vector();

	Vector(int &ax1, int &ax2, int &ax3, int &bx1, int &bx2, int &bx3);
	
	~Vector();
	
	void lVect();
	Vector Plus(Vector &b);
	Vector Minus(Vector &b);
	
	void scal1(Vector &a, Vector &b);
	
	void cos1(Vector &a, Vector &b);
	
	void getl();
	
	void getscal(Vector &a, Vector &b);

	void get();
	
};
