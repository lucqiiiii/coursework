#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"


int main() {

  struct Box b1,b2;

  initBox(&b1,3.0,4.0,5.0,2.0);  
  assertEquals("ul=(3,4),w=5,h=2", boxToString(b1), "boxToString(b1)");

  initBox(&b2,3.14159,6.2831853071,3.4123412,3.843198741);
  assertEquals("ul=(3.14,6.28),w=3.41,h=3.84", boxToString(b2), "boxToString(b2)");
  assertEquals("ul=(3,6),w=3,h=3]", boxToString(b2,1), "boxToString(b2,1)");
  assertEquals("ul=(3.142,6.283),w=3.412,h=3.843", boxToString(b2,4), "boxToString(b2,4)");
  assertEquals("ul=(3.1416,6.2832),w=3.4123,h=3.8432", boxToString(b2,5), "boxToString(b2,5)");		   
  return 0;
}
