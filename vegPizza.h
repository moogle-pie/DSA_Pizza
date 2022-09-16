#pragma once
#include "pizza.h"

class vegPizza : public pizza {
	string vegTop;
public:
	vegPizza();
	vegPizza(double cheese, int sauce, string crust, string vegTop);
	void setVegTop(string);
	string getVegTop();
	string* ptrVeg = &vegTop;

	void printPizza() override {
		std::cout << "--Pizza components--" << std::endl
			<< "Cheese: " << *ptrCheese << " cup" << std::endl
			<< "Sauce: " << *ptrSauce << " can" << std::endl
			<< "Crust: " << *ptrCrust << std::endl
			<< "Veg Toppings: " << *ptrVeg << std::endl << std::endl;
	};
};