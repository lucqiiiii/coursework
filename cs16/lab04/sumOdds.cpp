#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int sumOdds(int a[], int size) {
  int oddsSum =  0;
  for (int i = 0; i < size; i++){
    if (isOdd(int (a[i])) == 1)
      oddsSum += a[i];
  }
  return oddsSum;
}
