#pragma once
#include <iostream>
#include <list> 
#include <iterator>
#include <string>
class shopCart
{
private:
	std::list <std::string> list1;

public:
	void AddToShopCard(std::string n);
	void showList(std::list <std::string> g);
	void shopCardMenu();
	shopCart& operator=(const shopCart& right);
	
};

