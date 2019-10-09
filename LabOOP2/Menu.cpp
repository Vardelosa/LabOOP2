#include <iostream>
#include "Menu.h"
using namespace std;


void Menu::Show(int n)
{
	system("cls");
	setlocale(LC_ALL, "Russian");
	int count;
	string array1[4];
	cout << "Выберите блюдо, чтоб добавить его в корзину: " << endl;


	switch (n) // начало оператора switch
	{
	case 1: // если count = 1
	{
		cout << "1)Суп" << endl << "2)Борщ" << endl << "3)Бульон" << endl << "4)Окрошка" << endl << "5)Выход" << endl;
		cin >> count;
		system("pause");
		break;
	}
	case 2: // если count = 2
	{
		cout << "Вы купили Борщ"<<endl;
		system("pause");
		break;
	}
	case 3: // если count = 3
	{
		cout << "Вы купили бульон";
		system("pause");
		break;
	}
	case 4: // если count = 4
	{
		cout << "Вы купили солянку";
		system("pause");
		break;
	}
	default:
		break;
	}
}
