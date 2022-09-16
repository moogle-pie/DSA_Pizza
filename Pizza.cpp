#include "pizza.h"

pizza::pizza() {}
pizza::pizza(double ch, int s, string cr) {
	pizza::cheese = ch;
	pizza::sauce = s;
	pizza::crust = cr;
}

void pizza::setCheese(double ch) {
	cheese = ch;
}
double pizza::getCheese() {
	return cheese;
}
void pizza::setSauce(int s) {
	sauce = s;
}
int pizza::getSauce() {
	return sauce;
}
void pizza::setCrust(string cr) {
	crust = cr;
}
string pizza::getCrust() {
	return crust;
}