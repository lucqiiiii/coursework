#ifndef CLASSC_H
#define CLASSC_H
#include <iostream>
#include "clb.h"

using namespace std;

class C : public B{
public:
	~C() { cout << "C::~C()" << endl; }
	void f1(){ cout << "C::f1()" << endl; }
	virtual void f3(){ cout << "C::f3()" << endl; }
};
#endif
