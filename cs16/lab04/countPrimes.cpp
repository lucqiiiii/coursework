#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int countPrimes(int a[], int size) {
  int primeNum = 0;
  for(int i = 0; i < size; i++){
    if(isPrime(int (a[i])) == 1)
     primeNum ++;
  }
  return primeNum;
}
