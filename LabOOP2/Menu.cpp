#include <iostream>
#include "Menu.h"
using namespace std;


void Menu::Show(int n)
{
	system("cls");
	setlocale(LC_ALL, "Russian");
	int count;
	string array1[4];
	cout << "�������� �����, ���� �������� ��� � �������: " << endl;


	switch (n) // ������ ��������� switch
	{
	case 1: // ���� count = 1
	{
		cout << "1)���" << endl << "2)����" << endl << "3)������" << endl << "4)�������" << endl << "5)�����" << endl;
		cin >> count;
		system("pause");
		break;
	}
	case 2: // ���� count = 2
	{
		cout << "�� ������ ����"<<endl;
		system("pause");
		break;
	}
	case 3: // ���� count = 3
	{
		cout << "�� ������ ������";
		system("pause");
		break;
	}
	case 4: // ���� count = 4
	{
		cout << "�� ������ �������";
		system("pause");
		break;
	}
	default:
		break;
	}
}
