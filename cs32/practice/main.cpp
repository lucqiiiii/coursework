//#include "cla.h"
//#include "clb.h"
//#include "clc.h"
#include "person.h"
#include "student.h"
#include <string>
#include <iostream>
#include <unistd.h>
#include <vector>
using namespace std;

template <class T>
void printVector(int &v) {
	//for (int i = 0; i < v.size(); i++) {
	//	cout << "v[" << i << "] = " << v[i] << endl;
	cout << "ye"  << endl;
	// range-based for loop example
	// int index = 0;
	// for (int i : v) {
	// 	cout << "v[" << index << "] = " << i << endl;
	// }

	
}


/*void f1(){
    person p1("Qi Guo", 20);
    cout << p1.tostring();
    student s1("Echo", 20, 1234567);
    cout << s1.tostring();
    cout << "-----" << endl;
    person p2 = student("kelly", 20, 2345678);
    cout << p2.tostring();
    cout << "-----" << endl;
//	C c1;
//	A a1 = c1;
//	a1.f1();
//	a1.f2();
}

void f2(){
	B* b1 = new C();
	b1 -> f1();
	b1 -> f2();
	b1 -> f3();
	delete b1;
}

int main(){
	f1();
//	f2();
//    person p1("Qi Guo", 20);
//    student s1("Echo Lin", 20, 1234567);
//    person p2 = s1;     
    cout << "------" << endl;
    person* p1 = new person("QG", 20);
    cout << p1 -> tostring() << endl;

    student* s1 = new student("Echo", 20, 1234567);
    cout << s1 -> tostring() <<endl;
//    delete p1;
    cout << "-----" << endl;
//    delete s1;
//    cout << "----" << endl;
    person* p2 = new student("kelly", 20, 2345678);
    cout << p2 -> tostring();
//    delete p2;
	return 0;


}
*/
int main() {
//	while (true) {
//	sleep(10000); }
//	vector<int> v(100,33);
//for (int i = 0; i < 5; i++) // it could be any reasonable size…
//		v.push_back(i);

//	printVector(v);
//	cout << v.at(0) << endl;
//cout << v.at(5) << endl; // EXCEPTION THROWN
//cout << v[2] << endl; // JUNK
vector<int>* v = new vector<int>(10,1); // vector with 10 elements = 1
cout << v->size() << endl;
printVector(v);

}
