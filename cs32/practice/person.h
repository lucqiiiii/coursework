#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class person{
public:
    person(string name, int age);
    ~person();
    string getname() const {return name;}
    int getage() const {return age;}
    void setname(string name);
    void setage(int age);
     string tostring();
private:
    string name;
    int age;
};

#endif
