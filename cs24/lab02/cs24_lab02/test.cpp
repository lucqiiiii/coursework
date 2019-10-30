#include <iostream>
#include <ctime>
using namespace std;

void f(){
  clock_t begin = clock();
  int sum = 0;
  cout <<"type in n: "<< endl;
  int n;
  cin >> n;
  for (int i = 1; i < n; i*=2){
    for (int j = 1; j <= i; j*=2){
      sum++;
    }
  }
  clock_t end = clock();
  double diff = double(end - begin) / CLOCKS_PER_SEC;
  cout << diff << endl;
}

int main(){
  f();
  return 0;
}
