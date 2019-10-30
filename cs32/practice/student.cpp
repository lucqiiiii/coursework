#include "student.h"
#include <iostream>

using namespace std;

student::student(string name, int age, int perm) : person(name, age){
    this -> perm = perm;
}

void student::setperm(int perm){
    this ->perm = perm;
}

string student::getname(){
    return "Student: " + person::getname();
}

student::~student(){
    cout << "student destructor" << endl;
}
string student::tostring(){
    return "student tostring\n";
}    
