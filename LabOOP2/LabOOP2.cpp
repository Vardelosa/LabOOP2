//Интерфейс типа иерархического полноэкранного меню.Создать классы работы с меню, с
//возможностью иерархии пунктов меню.Диалоговое управления обеспечить с помощью
//созданного класса полноэкранного меню.
#include <iostream>
#include <fstream>
#include "Menu.h"
using namespace std;

int main()
{
	Menu menu1;
	setlocale(LC_ALL, "Russian");
	int count; 
	cout << "Меню ресторана *Аврора*"<<endl;
	cout << "1)Первые блюда"<< endl <<"2)Мясные блюда" << endl <<"3)Гарниры" << endl <<"4)Салаты" << endl << "5)Выход"<< endl;
	cin >> count;

		switch (count) // начало оператора switch
		{
		case 1: // если count = 1
		{
			cout << "1";
			break;
		}
		case 2: // если count = 2
		{
			cout << "2";
			break;
		}
		case 3: // если count = 3
		{
			cout << "3";
			break;
		}
		case 4: // если count = 4
		{
			cout << "4";
			break;
		}
		default:
			cout << "Спасибо за посещение!";
		}
	return 0;
}



