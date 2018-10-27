#include <iostream>
using namespace std;

class Vector
{
private:
int	a[3],b[3];

public:
	int geta() {
		return a[3];
  }
	int getb() {
		return b[3];
	}
	Vector(int a[3], int b[3])
	{
		this->a[3] = a[3];
		this->b[3] = b[3];
	}
	~Vector()
	{

	}



};

