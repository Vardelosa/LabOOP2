#pragma once
#include <iostream>
#include "shopCart.h"
class Menu :private shopCart
{
public:
	//int count;
	void Show(int n);
	shopCart shopcart;
};

