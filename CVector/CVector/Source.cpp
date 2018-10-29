#include <iostream>
#include <cmath>
#include "Vector.h"
using namespace std;

int main()
{
	 int g;
	
	setlocale(LC_ALL,"Russian");
	 int *a= new int [3]; int *b= new int [3];

	
	
		cout << "Выберите один из слудующих пунктов:" << endl;
		cout << "1.Посчитать длину вектора" << endl;
		cout << "2.Посчитать скалярное произведение двух векторов" << endl;
		cout << "3.Cos угла между векторами" << endl;
		cout << "4.Сложить" << endl;
		cout << "5.Вычесть" << endl;
		cout << "6.Выйти" << endl;
		cin >> g;
		switch (g)
		{
		case 1:
		{
			cout << "Введите координаты первой точки вектора ";
			for (int i = 0; i < 3; i++)
			{
				cin >> a[i];
				cout << " ";
			}
			cout << "\n" << "Введите координаты второй точки вектора ";
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
			cout << "Введите координаты первой точки вектора ";
			for (int i = 0; i < 3; i++)
			{
				cin >> a[i];
				cout << " ";
			}
			cout << "\n" << "Введите координаты второй точки вектора ";
			for (int i = 0; i < 3; i++)
			{
				cin >> b[i];
				cout << " ";
			}
			Vector c(a[0], a[1], a[2], b[0], b[1], b[2]);
			cout << "Введите координаты первой точки вектора ";
			for (int i = 0; i < 3; i++)
			{
				cin >> a[i];
				cout << " ";
			}
			cout << "\n" << "Введите координаты второй точки вектора ";
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
			cout << "Введите координаты первой точки вектора ";
			for (int i = 0; i < 3; i++)
			{
				cin >> a[i];
				cout << " ";
			}
			cout << "\n" << "Введите координаты второй точки вектора ";
			for (int i = 0; i < 3; i++)
			{
				cin >> b[i];
				cout << " ";
			}
			Vector c(a[0], a[1], a[2], b[0], b[1], b[2]);
			cout << "Введите координаты первой точки вектора ";
			for (int i = 0; i < 3; i++)
			{
				cin >> a[i];
				cout << " ";
			}
			cout << "\n" << "Введите координаты второй точки вектора ";
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
			cout << "Введите координаты первой точки вектора ";
			for (int i = 0; i < 3; i++)
			{
				cin >> a[i];
				cout << " ";
			}
			cout << "\n" << "Введите координаты второй точки вектора ";
			for (int i = 0; i < 3; i++)
			{
				cin >> b[i];
				cout << " ";
			}
			Vector c(a[0], a[1], a[2], b[0], b[1], b[2]);
			cout << "Введите координаты первой точки вектора ";
			for (int i = 0; i < 3; i++)
			{
				cin >> a[i];
				cout << " ";
			}
			cout << "\n" << "Введите координаты второй точки вектора ";
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
			cout << "Введите координаты первой точки вектора ";
			for (int i = 0; i < 3; i++)
			{
				cin >> a[i];
				cout << " ";
			}
			cout << "\n" << "Введите координаты второй точки вектора ";
			for (int i = 0; i < 3; i++)
			{
				cin >> b[i];
				cout << " ";
			}
			Vector c(a[0], a[1], a[2], b[0], b[1], b[2]);
			cout << "Введите координаты первой точки вектора ";
			for (int i = 0; i < 3; i++)
			{
				cin >> a[i];
				cout << " ";
			}
			cout << "\n" << "Введите координаты второй точки вектора ";
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
