#pragma once
#include <iostream>
#include "shopCart.h"
class Menu :private shopCart
{

public:
	//int count;
	Menu();
	Menu(std::string array[4]);
	void Show(int n);
	shopCart shopcart;
	std::string & operator[](int index);
	friend std::ostream& operator<< (std::ostream& out, const Menu& menu);
	std::string array_dishes[4];
};

