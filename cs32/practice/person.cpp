#include "person.h"
#include <iostream>

using namespace std;

person::person(string name, int age){
    this -> name = name;
    this -> age = age;
}

void person::setname(string name){
    this -> name = name;
}

void person::setage(int age){
    this -> age = age;
}

person::~person(){
    cout << "person destructor" << endl;
}

string person::tostring(){
    return "person tostring\n";



}
