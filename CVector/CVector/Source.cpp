#include <iostream>
#include <cmath>
using namespace std;

class Vector
{
private:
	int	a1, a2, a3;
	double l, scal, cos;

public:
	Vector()
	{

	}

	Vector(int &ax1, int &ax2, int &ax3, int &bx1, int &bx2, int &bx3)
	{
		a1 = bx1 - ax1;
		a2 = bx2 - ax2;
		a3 = bx3 - ax3;
		l = 0;
		scal = 0;
		cos = 0;
	}
	~Vector()
	{

	}
	void lVect()
	{
		l = sqrt(pow(a1, 2) + pow(a2, 2) + pow(a3, 2));
		

	}
	Vector Plus(Vector &b)
	{
		Vector c;
		c.a1 = this->a1 + b.a1;
		c.a2 = this->a2 + b.a2;
		c.a3 = this->a3 + b.a3;
		return c;

	}
	Vector Minus(Vector &b)
	{
		Vector c;
		c.a1 = this->a1 - b.a1;
		c.a2 = this->a2 - b.a2;
		c.a3 = this->a3 - b.a3;

		return c;

	}
	void scal1(Vector &a, Vector &b)
	{
		scal = a.a1*b.a1 + a.a2*b.a2 + a.a3*b.a3;
	}
	void cos1(Vector &a, Vector &b)
	{
		a.lVect();
		b.lVect();
		scal1(a, b);
		
		cos = scal / (a.l*b.l);
		
		cout << "Cos ���� ����� ���������: " << cos << endl;
	}
	void getl()
	{
		lVect();
		cout << "����� ������� " << l;
	}
	void getscal(Vector &a, Vector &b)
	{
		scal1(a, b);
		cout << "��������� ������������: " << scal << endl;
	}
	void get()
	{
		cout <<"���������� ������� " << a1 << ", " << a2 <<", " << a3<< endl;
	}
};
int main()
{
	int g;
	int k = 0;
	setlocale(LC_ALL,"Russian");
	int *a= new int [3]; int *b= new int [3];

	while (true)
	{
		cout << "�������� ���� �� ��������� �������:" << endl;
		cout << "1.��������� ����� �������" << endl;
		cout << "2.��������� ��������� ������������ ���� ��������" << endl;
		cout << "3.Cos ���� ����� ���������" << endl;
		cout << "4.�������" << endl;
		cout << "5.�������" << endl;
		cout << "6.�����" << endl;
		cin >> g;
		switch (g)
		{
		case 1:
		{
			cout << "������� ���������� ������ ����� ������� ";
			for (int i = 0; i < 3; i++)
			{
				cin >> a[i];
				cout << " ";
			}
			cout << "\n" << "������� ���������� ������ ����� ������� ";
			for (int i = 0; i < 3; i++)
			{
				cin >> b[i];
				cout << " ";
			}
			Vector c(a[0], a[1], a[2], b[0], b[1], b[2]);
			c.getl();
			cout << "\n";
			delete a;
			delete b;
		}
		case 2:
		{
			cout << "������� ���������� ������ ����� ������� ";
			for (int i = 0; i < 3; i++)
			{
				cin >> a[i];
				cout << " ";
			}
			cout << "\n" << "������� ���������� ������ ����� ������� ";
			for (int i = 0; i < 3; i++)
			{
				cin >> b[i];
				cout << " ";
			}
			Vector c(a[0], a[1], a[2], b[0], b[1], b[2]);
			cout << "������� ���������� ������ ����� ������� ";
			for (int i = 0; i < 3; i++)
			{
				cin >> a[i];
				cout << " ";
			}
			cout << "\n" << "������� ���������� ������ ����� ������� ";
			for (int i = 0; i < 3; i++)
			{
				cin >> b[i];
				cout << " ";
			}
			Vector d(a[0], a[1], a[2], b[0], b[1], b[2]);
			c.getscal(c, d);
			delete a;
			delete b;
		}
		case 3:
		{
			cout << "������� ���������� ������ ����� ������� ";
			for (int i = 0; i < 3; i++)
			{
				cin >> a[i];
				cout << " ";
			}
			cout << "\n" << "������� ���������� ������ ����� ������� ";
			for (int i = 0; i < 3; i++)
			{
				cin >> b[i];
				cout << " ";
			}
			Vector c(a[0], a[1], a[2], b[0], b[1], b[2]);
			cout << "������� ���������� ������ ����� ������� ";
			for (int i = 0; i < 3; i++)
			{
				cin >> a[i];
				cout << " ";
			}
			cout << "\n" << "������� ���������� ������ ����� ������� ";
			for (int i = 0; i < 3; i++)
			{
				cin >> b[i];
				cout << " ";
			}
			Vector d(a[0], a[1], a[2], b[0], b[1], b[2]);

			c.cos1(c, d);
			delete a;
			delete b;
		}
		case 4:
		{
			cout << "������� ���������� ������ ����� ������� ";
			for (int i = 0; i < 3; i++)
			{
				cin >> a[i];
				cout << " ";
			}
			cout << "\n" << "������� ���������� ������ ����� ������� ";
			for (int i = 0; i < 3; i++)
			{
				cin >> b[i];
				cout << " ";
			}
			Vector c(a[0], a[1], a[2], b[0], b[1], b[2]);
			cout << "������� ���������� ������ ����� ������� ";
			for (int i = 0; i < 3; i++)
			{
				cin >> a[i];
				cout << " ";
			}
			cout << "\n" << "������� ���������� ������ ����� ������� ";
			for (int i = 0; i < 3; i++)
			{
				cin >> b[i];
				cout << " ";
			}
			Vector d(a[0], a[1], a[2], b[0], b[1], b[2]);
			Vector f = c.Plus(d);
			f.get();
			delete a;
			delete b;
		}
		case 5:
		{
			cout << "������� ���������� ������ ����� ������� ";
			for (int i = 0; i < 3; i++)
			{
				cin >> a[i];
				cout << " ";
			}
			cout << "\n" << "������� ���������� ������ ����� ������� ";
			for (int i = 0; i < 3; i++)
			{
				cin >> b[i];
				cout << " ";
			}
			Vector c(a[0], a[1], a[2], b[0], b[1], b[2]);
			cout << "������� ���������� ������ ����� ������� ";
			for (int i = 0; i < 3; i++)
			{
				cin >> a[i];
				cout << " ";
			}
			cout << "\n" << "������� ���������� ������ ����� ������� ";
			for (int i = 0; i < 3; i++)
			{
				cin >> b[i];
				cout << " ";
			}
			Vector d(a[0], a[1], a[2], b[0], b[1], b[2]);
			Vector f = c.Minus(d);
			f.get();
			delete a;
			delete b;
		}
		case 6:
		{
			exit(0);
		}
		}

	}

	system("pause");

	return 0;
}
