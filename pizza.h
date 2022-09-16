//base/abstract class 
#pragma once
#include <iostream>
#include <string>

using namespace std;

class pizza {
	double cheese;
	int sauce;
	string crust;

public:
	pizza();
	pizza(double cheese, int sauce, string crust);
	void setCheese(double);
	double getCheese();
	void setSauce(int);
	int getSauce();
	void setCrust(string);
	string getCrust();

	double* ptrCheese = &cheese; // pointers
	int* ptrSauce = &sauce;
	string* ptrCrust = &crust;

	virtual void printPizza() {
		std::cout << "--Pizza components--" << std::endl
			<< "Cheese: " << *ptrCheese << " cup" << std::endl // references
			<< "Sauce: " << *ptrSauce << " can" << std::endl
			<< "Crust: " << *ptrCrust << std::endl << std::endl;
	};
};