#include "vegPizza.h"

vegPizza::vegPizza() {}
vegPizza::vegPizza(double ch, int s, string cr, string vt) {
	pizza::setCheese(ch);
	pizza::setSauce(s);
	pizza::setCrust(cr);
	vegPizza::vegTop = vt;
}

void vegPizza::setVegTop(string vt)
{
	vegTop = vt;
}

string vegPizza::getVegTop()
{
	return vegTop;
}