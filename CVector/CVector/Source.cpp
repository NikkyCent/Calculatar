#include <iostream>
#include <cmath>
#include "Vector.h"
using namespace std;

int main()
{
	 int g;
	
	setlocale(LC_ALL,"Russian");
	 int *a= new int [3]; int *b= new int [3];

	
	
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
			break;
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
			break;
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
			break;
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
			break;
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
			break;
		}
		case 6:
		{
			exit(0);
		}
		}

	

	system("pause");

	return 0;
}
