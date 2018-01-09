#include<iostream>
#include <string>
#include "other.h"
using namespace std;
int main() {

	cout << "Hello world!" << endl;
	cout << "push_back" << endl;
	Other* o = new Other();
	string s = o->getX();
	cout << s << endl;
	o->printX();

}