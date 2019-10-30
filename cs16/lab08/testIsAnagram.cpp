#include "strFuncs.h"
#include "tddFuncs.h"

// Next we have our main program that runs the tests
int main()
{

  assertEquals(true, isAnagram("abc","cba"),"isAnagram(abc,cba)");
  assertEquals(true, isAnagram("abc","abc"),"isAnagram(abc,abc)");
  assertEquals(true, isAnagram("abc","bac"),"isAnagram(abc,bac)");
  assertEquals(true, isAnagram("PiZzA","PiZzA"),"isAnagram(PiZzA,PiZzA)");
  assertEquals(true, isAnagram("PiZzA","ZapiZ"),"isAnagram(PiZzA,ZapiZ)");
  assertEquals(false, isAnagram("abc","ccba"),"isAnagram(abc,ccba)");
  assertEquals(false, isAnagram("cba","ccba"),"isAnagram(cba,ccba)");
  assertEquals(false, isAnagram("hello","helo"),"isAnagram(hello,helo)");
  assertEquals(false, isAnagram("hello","PiZzA"),"isAnagram(hello,PiZzA)");
  assertEquals(false, isAnagram("bac","helo"),"isAnagram(bac,helo)");

  return 0;
}
