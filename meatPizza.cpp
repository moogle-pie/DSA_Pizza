#include "meatPizza.h"

meatPizza::meatPizza() {}
meatPizza::meatPizza(double ch, int s, string cr, string mt) {
	pizza::setCheese(ch);
	pizza::setSauce(s);
	pizza::setCrust(cr);
	meatPizza::meatTop = mt;
}

void meatPizza::setMeatTop(string mt)
{
	meatTop = mt;
}

string meatPizza::getMeatTop()
{
	return meatTop;
}