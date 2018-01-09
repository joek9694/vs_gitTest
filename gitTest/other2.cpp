#include "other2.h"
#include <iostream>

Other2::Other2() {
	x = "Hello again2!";
}

string Other2::getX() {
	return x;
}

void Other2::printX() {
	cout << x << endl;
}