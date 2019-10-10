#pragma once
#include <iostream>
#include "shopCart.h"
class Menu :private shopCart
{
private:
	std::string array_dishes[4];
public:
	//int count;
	void Show(int n);
	shopCart shopcart;
	std::string & operator[](int index);
};

