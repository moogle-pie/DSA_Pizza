#pragma once
#include "vegPizza.h"
#include "meatPizza.h"
class comboPizza : public pizza
{
public:
	comboPizza();
	comboPizza(double cheese, int sauce, string crust, string meatToppings, string vegTop);

	void printPizza() override {
		std::cout << "--Pizza components--" << std::endl
			<< "Cheese: " << *ptrCheese << " cup" << std::endl
			<< "Sauce: " << *ptrSauce << " can" << std::endl
			<< "Crust: " << *ptrCrust << std::endl
			<< "Meat Toppings: " << *ptrMeat << std::endl 
			<< "Vegetable Toppings: " << *ptrVeg << std::endl << std::endl;
	};
};

