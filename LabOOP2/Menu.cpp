#include <iostream>
#include "Menu.h"
#include "shopCart.h"
using namespace std;

string& Menu:: operator[](int index)
{
	setlocale(LC_ALL, "Russian");
	return array_dishes[index - 1];
}

void Menu::Show(int n)
{
	system("cls");
	setlocale(LC_ALL, "Russian");
	int count;
	int j = n;

	cout << "�������� �����, ���� �������� ��� � �������: " << endl;


	switch (j) // ������ ��������� switch
	{
	case 1: // ���� count = 1
	{
		array_dishes[0] = "���"; array_dishes[1] = "����"; array_dishes[2] = "������"; array_dishes[3] = "�������";
		cout << "1)" << array_dishes[0] << endl << "2)" << array_dishes[1] << endl << "3)" << array_dishes[2] << endl << "4)" << array_dishes[3] << endl << "5)�����" << endl;
		cin >> count;
		if (count == 5)
			break;
		shopcart.AddToShopCard((*this)[count]);
		break;
	}
	case 2: // ���� count = 2
	{
		array_dishes[0] = "��������"; array_dishes[1] = "������"; array_dishes[2] = "�����"; array_dishes[3] = "����������";
		cout << "1)" << array_dishes[0] << endl << "2)" << array_dishes[1] << endl << "3)" << array_dishes[2] << endl << "4)" << array_dishes[3] << endl << "5)�����" << endl;
		cin >> count;
		if (count == 5)
			break;
		shopcart.AddToShopCard((*this)[count]);
		break;
	}
	case 3: // ���� count = 3
	{
		array_dishes[0] = "��������"; array_dishes[1] = "�������"; array_dishes[2] = "����"; array_dishes[3] = "���";
		cout << "1)" << array_dishes[0] << endl << "2)" << array_dishes[1] << endl << "3)" << array_dishes[2] << endl << "4)" << array_dishes[3] << endl << "5)�����" << endl;
		cin >> count;
		if (count == 5)
			break;
		shopcart.AddToShopCard((*this)[count]);
		break;
	}
	case 4: // ���� count = 4
	{
		array_dishes[0] = "�����"; array_dishes[1] = "������"; array_dishes[2] = "��������"; array_dishes[3] = "����������";
		cout << "1)" << array_dishes[0] << endl << "2)" << array_dishes[1] << endl << "3)" << array_dishes[2] << endl << "4)" << array_dishes[3] << endl << "5)�����" << endl;
		cin >> count;
		if (count == 5)
			break;
		shopcart.AddToShopCard((*this)[count]);
		break;
	}
	default:
		break;
	}
}


