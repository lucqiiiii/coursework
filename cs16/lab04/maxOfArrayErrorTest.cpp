#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {

  int empty[] = {};
  // expect this function to result in message to cerr and exit(1);
  assertEquals(0,
	       maxOfArray(empty,0), 
	       "maxOfArray(empty,0)" ); 

  return 0;

}
