// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    

// For example, if you need an isPrime function, you can put the function
// definition in this file.  Similarly, isOdd or isEven might be useful.

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions
#include <cmath>
#include "utility.h"
bool isOdd(int x) { 
  return (x % 2 != 0);  
}
bool isEven(int x) { 
  return (x % 2 == 0);  
}
bool isPrime(int x) {
  int num = static_cast<int>(sqrt(x));
  if (x < 2)
    return false;
  while (num >= 2){
    if (x % num == 0){
      return false;
    }
    num--;
  }
  return true; 
}
