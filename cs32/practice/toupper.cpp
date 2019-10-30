#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int function(){
  return 0;
}

int main() {
    cout << function<< endl;
    cout << reinterpret_cast<void*>(function) << endl;

/*	string s = "abcd";
	cout << s << endl;
	transform(s.begin(), s.end(), s.begin(), toupper);
	cout << s << endl;
	return 0;*/
}
