#include <iostream>
#include "Menu.h"

void Show()
{
	int count;
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
}
//Menu()
//{
//
//}