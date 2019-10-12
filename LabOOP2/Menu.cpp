#include <iostream>
#include <fstream>
#include "Menu.h"
#include "shopCart.h"
using namespace std;

string& Menu:: operator[](int index)
{
	return array_dishes[index - 1];
}

ostream& operator<< (ostream& out, const Menu& menu)
{
	// ��������� operator<< �������� ������ ������ Point, �� �� ����� ������ ������ � ������ Point
	out << "1)" <<menu.array_dishes[0] << endl << "2)" << menu.array_dishes[1] << endl << "3)" << menu.array_dishes[2] << endl << "4)" << menu.array_dishes[3] << endl << "5)�����" << endl;
	return out;
}

Menu::Menu()
{

}

Menu::Menu(std::string array[4])
{
	this->array_dishes[0] = array[0];
	this->array_dishes[1] = array[1];
	this->array_dishes[2] = array[2];
	this->array_dishes[3] = array[3];
	return;
}


//std::ofstream fout;
//fout.open("file.txt");

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
		Menu menu1(new string[4]{ "C��","����","������","�������" });
		cout << menu1;
		cin >> count;
		if (count == 5)
			break;
		shopcart.AddToShopCard(menu1[count]);
		break;
	}
	case 2: // ���� count = 2
	{
		Menu menu1(new string[4]{ "�����","��������","���� ��-���������","����������" });
		cout << menu1;
		cin >> count;
		if (count == 5)
			break;
		shopcart.AddToShopCard(menu1[count]);
		break;
	}
	case 3: // ���� count = 3
	{
		Menu menu1(new string[4]{ "��������","�������","���","����" });
		cout << menu1;
		cin >> count;
		if (count == 5)
			break;
		shopcart.AddToShopCard(menu1[count]);
		break;
	}
	case 4: // ���� count = 4
	{
		Menu menu1(new string[4]{ "������","������� ��� �����","������","���������" });
		cout << menu1;
		cin >> count;
		if (count == 5)
			break;
		shopcart.AddToShopCard(menu1[count]);
		break;
	}
	default:
		break;
	}
}


