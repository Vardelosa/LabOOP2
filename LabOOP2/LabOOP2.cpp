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
	
	do
	{
		system("cls");
		cout << "Меню ресторана *Аврора*" << endl;
		cout << "1)Первые блюда" << endl << "2)Мясные блюда" << endl << "3)Гарниры" << endl << "4)Салаты" << endl <<"\n\n5)Корзина"<< endl <<"6)Выход" << endl;
		cin >> count;
		switch (count) // начало оператора switch
		{
		case 1: // если count = 1
		{
			menu1.Show(count);
			system("pause");
			break;
		}
		case 2: // если count = 2
		{
			menu1.Show(count);
			system("pause");
			break;
		}
		case 3: // если count = 3
		{
			menu1.Show(count);
			system("pause");
			break;
		}
		case 4: // если count = 4
		{
			menu1.Show(count);
			system("pause");
			break;
		}
		case 5:
		{
			system("cls");
			cout << "Корзина: " << endl;
			menu1.shopcart.showshopcard();
			system("pause");
			break;
		}
		case 6:
		{
			system("cls");
			cout << "Спасибо за посещение!";
		}
		default:
			break;
		}
	} while (count != 6);
		return 0;
}



