#include <iostream>
#include "Menu.h"
#include "shopCart.h"
using namespace std;


void Menu::Show(int n)
{
	
	system("cls");
	setlocale(LC_ALL, "Russian");
	int count;
	int g = n;
	string array_first[4]{ "���", "����", "������", "�������" };
	string array_meat[4]{ "��������", "������", "���� ��-����������", "����������" };
	string array_garnier[4]{ "��������", "�������", "����", "���" };
	string array_salad[4]{ "������", "���������", "�������", "���������" };
	cout << "�������� �����, ���� �������� ��� � �������: " << endl;


	switch (g) // ������ ��������� switch
	{
	case 1: // ���� count = 1
	{
		cout << "1)" << array_first[0] << endl << "2)" << array_first[1] << endl << "3)" << array_first[2] << endl << "4)" << array_first[3] << endl << "5)�����" << endl;
		cin >> count;
		if (count == 5)
			break;
		shopcart.AddToShopCard(array_first[count-1]);
		break;
	}
	case 2: // ���� count = 2
	{
		cout << "1)" << array_meat[0] << endl << "2)" << array_meat[1] << endl << "3)" << array_meat[2] << endl << "4)" << array_meat[3] << endl << "5)�����" << endl;
		cin >> count;
		if (count == 5)
			break;
		shopcart.AddToShopCard(array_meat[count-1]);
		break;
	}
	case 3: // ���� count = 3
	{
		cout << "1)" << array_garnier[0] << endl << "2)" << array_garnier[1] << endl << "3)" << array_garnier[2] << endl << "4)" << array_garnier[3] << endl << "5)�����" << endl;
		cin >> count;
		if (count == 5)
			break;
		shopcart.AddToShopCard(array_garnier[count-1]);
		break;
	}
	case 4: // ���� count = 4
	{
		cout << "1)" << array_salad[0] << endl << "2)" << array_salad[1] << endl << "3)" << array_salad[2] << endl << "4)" << array_salad[3] << endl << "5)�����" << endl;
		cin >> count;
		if (count == 5)
			break;
		shopcart.AddToShopCard(array_salad[count-1]);
		break;
	}
	default:
		break;
	}
}
