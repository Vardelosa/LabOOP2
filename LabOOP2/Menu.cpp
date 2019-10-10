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

	cout << "Выберите блюдо, чтоб добавить его в корзину: " << endl;


	switch (j) // начало оператора switch
	{
	case 1: // если count = 1
	{
		array_dishes[0] = "Суп"; array_dishes[1] = "Борщ"; array_dishes[2] = "Бульон"; array_dishes[3] = "Окрошка";
		cout << "1)" << array_dishes[0] << endl << "2)" << array_dishes[1] << endl << "3)" << array_dishes[2] << endl << "4)" << array_dishes[3] << endl << "5)Назад" << endl;
		cin >> count;
		if (count == 5)
			break;
		shopcart.AddToShopCard((*this)[count]);
		break;
	}
	case 2: // если count = 2
	{
		array_dishes[0] = "Отбивная"; array_dishes[1] = "Шашлык"; array_dishes[2] = "Стейк"; array_dishes[3] = "Сковородка";
		cout << "1)" << array_dishes[0] << endl << "2)" << array_dishes[1] << endl << "3)" << array_dishes[2] << endl << "4)" << array_dishes[3] << endl << "5)Назад" << endl;
		cin >> count;
		if (count == 5)
			break;
		shopcart.AddToShopCard((*this)[count]);
		break;
	}
	case 3: // если count = 3
	{
		array_dishes[0] = "Картошка"; array_dishes[1] = "Капуста"; array_dishes[2] = "Каша"; array_dishes[3] = "Рис";
		cout << "1)" << array_dishes[0] << endl << "2)" << array_dishes[1] << endl << "3)" << array_dishes[2] << endl << "4)" << array_dishes[3] << endl << "5)Назад" << endl;
		cin >> count;
		if (count == 5)
			break;
		shopcart.AddToShopCard((*this)[count]);
		break;
	}
	case 4: // если count = 4
	{
		array_dishes[0] = "Стейк"; array_dishes[1] = "Шашлык"; array_dishes[2] = "Отбивная"; array_dishes[3] = "Сковородка";
		cout << "1)" << array_dishes[0] << endl << "2)" << array_dishes[1] << endl << "3)" << array_dishes[2] << endl << "4)" << array_dishes[3] << endl << "5)Назад" << endl;
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


