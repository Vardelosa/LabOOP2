#include <iostream>
#include "shopCart.h"
#include <list> 
#include <iterator>
#include <fstream>
#include <string>
using namespace std;
ofstream fout;

void shopCart::showList(list <string> g)
{	
	fout.open("file.txt");
	fout << "Корзина: " << endl;
	int i = 1;
	list <string> ::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
	{
		cout << i << ")" << *it << endl;
		fout << i << ")" << *it << endl;
		i++;
	}
	cout << '\n';
	fout.close();
}
void shopCart::AddToShopCard(string product)
{
list1.push_back(product);
cout << "Товар добавлен в корзину!" << endl;
}
shopCart test;
int testing_count = 0;
void shopCart::shopCardMenu()
{
	if (testing_count == 0) { test = (*this); }
	if (test.list1.size() < 1)
		cout << "Корзина пуста." << endl;
	else
	{
		test.showList(test.list1);
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
			if (n<0 && n>test.list1.size())
				cout << "Нет продукта с таким номером";
			else
			{
				int i = 1;
				list <string> ::iterator it;
				for (it = test.list1.begin(); it != test.list1.end(); ++it)
				{
					if (i == n)
					{
						test.list1.remove(*it);
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
	testing_count++;
}
shopCart& shopCart::operator=(const shopCart& right)
{
	if (this == &right) {
		return *this;
	}
	list1 = right.list1;
	return *this;
}

