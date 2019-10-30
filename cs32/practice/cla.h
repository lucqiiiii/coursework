#ifndef CLASSA_H
#define CLASSA_H
#include <iostream>

using namespace std;

class A{
public:
	~A() { cout << "A::~A()" << endl; }
	void f1(){ cout << "A::f1()" << endl; }
	virtual void f2(){ cout << "A::f2()" << endl; }
};
#endif
