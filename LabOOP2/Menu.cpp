#include <iostream>
#include "Menu.h"

void Show()
{
	int count;
	cin >> count;

	switch (count) // ������ ��������� switch
	{
	case 1: // ���� count = 1
	{
		cout << "1";
		break;
	}
	case 2: // ���� count = 2
	{
		cout << "2";
		break;
	}
	case 3: // ���� count = 3
	{
		cout << "3";
		break;
	}
	case 4: // ���� count = 4
	{
		cout << "4";
		break;
	}
	default:
		cout << "������� �� ���������!";
	}
}
//Menu()
//{
//
//}