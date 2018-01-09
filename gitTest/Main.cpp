#include<iostream>
#include <string>
#include "other.h"
#include "other2.h"
using namespace std;
int main() {

	cout << "Hello world!" << endl;
	cout << "push_back" << endl;
	Other* o = new Other();
	string s = o->getX();
	cout << s << endl;
	o->printX();

	Other2* o2 = new Other2();
	string s2 = o2->getX();
	cout << s2 << endl;
	o2->printX();
}