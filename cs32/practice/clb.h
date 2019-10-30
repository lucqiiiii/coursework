#ifndef CLASSB_H
#define CLASSB_H
#include <iostream>
#include "cla.h"

using namespace std;

class B : public A{
public:
	virtual ~B() { cout << "B::~B()" << endl; }
	virtual void f1(){ cout << "B::f1()" << endl; }
	void f2(){ cout << "B::f2()" << endl; }
	virtual void f3() = 0;
};
#endif
