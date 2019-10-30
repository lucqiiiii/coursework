#include "strFuncs.h"
#include "tddFuncs.h"
#include <iostream>

using namespace std;

// Next we have our main program that runs the tests
int main()
{

  assertEquals(false, isAnagram("abc"),"isAnagram(abc)");
  assertEquals(false, isAnagram("redivide"),"isAnagram(redivide)");
  assertEquals(true, isAnagram("detartrated"),"isAnagram(detartrated)");
  assertEquals(false, isAnagram("PiZzA"),"isAnagram(PiZzA)");
  assertEquals(true, isAnagram("ZaippiaZ"),"isAnagram(ZaippiaZ)");
  assertEquals(false, isAnagram("cabbad"),"isAnagram(cabbad)");
  assertEquals(false, isAnagram("cbacc"),"isAnagram(cbacc)");
  assertEquals(true, isAnagram("o"),"isAnagram(o)");
  assertEquals(true, isAnagram(""),"isAnagram(emptystring)");
  assertEquals(false, isAnagram("helo"),"isAnagram(helo)");

  return 0;
}
