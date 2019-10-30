/*#include <iostream>
using namespace std;

void f(){ cout << "f()" << endl;}
using namespace A;

int main(){
	::f();
	return 0;
}
*/
#include "F1.h"
#include "F2.h"
using namespace CS_32_F1;
using namespace std;
void someFunction() {
	cout << "in some function (global namespace)" << endl;
}

int main() {
	// someFunction(); // which one?? – won’t compile.
	CS_32_F1::someFunction(); // knows it’s someFunction in global namespace
}
