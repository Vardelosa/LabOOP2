#pragma once
#include <iostream>
#include <list> 
#include <iterator>
#include <string>
class shopCart
{
private:
	std::string temp;
public:
	void AddToShopCard(std::string n);
	void showList(std::list <std::string> g);
	void showshopcard();
	std::list <std::string> list1;
};

