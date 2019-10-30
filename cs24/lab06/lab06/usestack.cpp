// usestack.cpp - for CS 24 lab practice using stacks
// Qi Guo, 11/8/2018
#include "intstack.h"
#include <iostream>
using namespace std;

int main() {
//evaluating "6 4 - 2 3 * +"

// start with an ampty stack
    Stack numbers;
   
// first two tokens both numbers to push "6 4":
    numbers.push(6);
    numbers.push(4);

// third token is calculation to do "-":
    int right = numbers.top();
    numbers.pop();
    int left = numbers.top();
    numbers.pop();
    numbers.push(left - right);

//Forth and fifth tokens both numbers to push "2 3":
    numbers.push(2);
    numbers.push(3);

//Sixth token is calculation to do "*":
    right = numbers.top();
    numbers.pop();
    left = numbers.top();
    numbers.pop();
    numbers.push(left * right);

//Last token is another calculation "+":
    right = numbers.top();
    numbers.pop();
    left = numbers.top();
    numbers.pop();
    numbers.push(left + right);

 //done - print result:
    cout << numbers.top() << endl;

    return 0;
}
