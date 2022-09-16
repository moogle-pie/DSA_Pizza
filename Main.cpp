#include "meatPizza.h"
#include "vegPizza.h"

int main() {

	pizza pizza1(.25, 1, "Thin");
	pizza1.printPizza();

	meatPizza pizza2(.25, 1, "Regular", "Pepperoni");
	pizza2.printPizza();

	vegPizza pizza3(.33, 1, "Thick", "Broccoli & Onion");
	pizza3.printPizza();

	std::cin.get();

	return 0;
}