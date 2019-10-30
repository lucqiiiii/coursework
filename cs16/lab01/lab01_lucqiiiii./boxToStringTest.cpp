#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"


using namespace std;

int main() {

  struct Box b1,b2;

  initBox(&b1,3.4,-5, 5, 7);  
  assertEquals("ul=(3.4,-5), w=5,h=7", boxToString(b1), "boxToString(b1)");

  initBox(&b2,3.14159,6.2831853071, 3.14159,6.2831853071);
  assertEquals("ul=[3.14,6.28], w=3.14,h=6.28", boxToString(b2), "boxToString(b2)");
  assertEquals("ul=[3,6], w=3,h=6", boxToString(b2,1), "boxToString(b2,1)");
  assertEquals("ul=[3.141,6.283], w=3.141,h=6.283", boxToString(b2,4), "boxToString(b2,4)");
  assertEquals("ul=[3.1416,6.2832], w=3.1416,h=6.2832", boxToString(b2,5), "boxToString(b2,5)");

		   
  return 0;
}
