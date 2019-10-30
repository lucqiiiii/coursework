// triangles.cpp - more recursive print functions
// Qi Guo, 11/29/2018

#include <iostream>
using namespace std;

// recursively prints n asterisks ('*') on one line to cout
void stars(int n) {
    if(n == 0){
        return;
    }
    else{
        cout << "*"; 
        stars(n-1);
    }
}

// recursively prints rows of '*', first n, then n-1, ... 1
void triangle(int n) {
    if(n == 0){
        return;
    }
    else{
        stars(n);
        cout << endl;
        triangle(n-1);
    }
}

// recursively prints rows of '*' in reverse: 1, 2, ... n
void rtriangle(int n) {
    if(n == 0){
        return;
     }
    else{
        rtriangle(n-1);
        stars(n);
        cout << endl;
    }
}

int main() {
    int size;
    cout << "enter size: " << endl;
    cin >> size;

    triangle(size); 

    rtriangle(size);

}
