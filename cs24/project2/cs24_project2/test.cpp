#include <iostream>
#include "word.h"

using namespace std;

int main(){
    string a = "apple";
    string b = "banana";
    string c = "carrot";
    word myword(a);
    myword.insert_word(a);
    myword.insert_word(b);
    myword.insert_word(c);

    return 0;
}
