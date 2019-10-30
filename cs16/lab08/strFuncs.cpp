#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
  int arr1[26] = {0};
  int arr2[26] = {0};
  for(int i = 0; i < (s1.length()); i++){
    if((s1[i] >= 'a') && (s1[i] <= 'z')){
      arr1[s1[i] -'a']++;
    }
    else if((s1[i] >= 'A') && (s1[i] <= 'Z')){
      arr1[s1[i] -'A']++;
    }
    else
      continue;
  }
  for(int i = 0; i < (s2.length()); i++){
    if((s2[i] >= 'a') && (s2[i] <= 'z')){
      arr2[s2[i] -'a']++;
    }
    else if((s2[i] >= 'A') && (s2[i] <= 'Z')){
      arr2[s2[i] -'A']++;
    }
    else
      continue;
  }
  for(int i =0; i < 26; i++){
    if(arr1[i] == arr2[i])
      continue;
    else
      return false;
    }
  return true;
}

/*  if(s1.length() != s2.length())
    return false;
  int i = 0;
  while(i < s1.length()){
    if(s2.find(s1[i]) != 
*/
/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 * You should provide a recursive solution
 */
bool isPalindrome(const string s1){
  int l = s1.length();
  if(l == 1 )
    return true;
  else if(l == 0)
    return true;
  else if(tolower(s1[0]) != tolower(s1[l - 1]))
    return false;
  else
    return isPalindrome(s1.substr(1,l-2));
}


