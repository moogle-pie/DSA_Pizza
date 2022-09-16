#pragma once
#include "pizza.h"

class meatPizza : public pizza {
	string meatTop;
public:
	meatPizza();
	meatPizza(double cheese, int sauce, string crust, string meatToppings);
	void setMeatTop(string);
	string getMeatTop();
	string* ptrMeat = &meatTop;

	void printPizza() override {
		std::cout << "--Pizza components--" << std::endl
			<< "Cheese: " << *ptrCheese << " cup" << std::endl
			<< "Sauce: " << *ptrSauce << " can" << std::endl
			<< "Crust: " << *ptrCrust << std::endl
			<< "Meat Toppings: " << *ptrMeat << std::endl << std::endl;
	};
};