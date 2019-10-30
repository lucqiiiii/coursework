#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
#include <iostream>

using namespace std;

class student : public person{
public:
    student(string name, int age, int perm);
    ~student();
    int getperm() const{return perm;}
    void setperm(int perm);     
    string getname();
     string tostring();
private:
    int perm;
};

#endif

