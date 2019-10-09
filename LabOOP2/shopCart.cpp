#include <iostream>
#include "shopCart.h"
#include <list> 
#include <iterator>
#include <string>
using namespace std;
void shopCart::showList(list <string> g)
{
	int i = 1;
	list <string> ::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
	{
		cout << i << ")" << *it << endl;
		i++;
	}
	cout << '\n';
}
void shopCart::AddToShopCard(string n)
{
	temp = n;
list1.push_back(n);
cout << "Товар добавлен в корзину!" << endl;
}

void shopCart::showshopcard()
{
	if (list1.size() < 1)
		cout << "Корзина пуста." << endl;
	else
	{
		showList(list1);
	}
	cout << endl << endl << "1)Удалить товар из корзины"<< endl << "2)Купить еще что-то" <<endl;
	int count;
	cin >> count;
	switch (count)
	{
		case 1:
		{
			int n;
			cout << "Введите номер продукта по списку: "; cin >> n;
			if (n<0 && n>list1.size())
				cout << "Нет продукта с таким номером";
			else
			{
				int i = 1;
				list <string> ::iterator it;
				for (it = list1.begin(); it != list1.end(); ++it)
				{
					if(i==n)
					{
						list1.remove(*it);
						cout << "Товар удален из корзины." << endl;
						break;
					}
					i++;
				}
			}
		}
		case 2:
		{
			break;
		}
	default:
		break;
	}

}
