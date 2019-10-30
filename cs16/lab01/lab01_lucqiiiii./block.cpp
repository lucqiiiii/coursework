#include <iostream>
using namespace std;

int main(){
	int r;
	int c;
	cout << "Enter number of rows and columns:" << endl;
	cin >> r >> c;
	while (c>0 && r>0){
		for(int x = 0; x < r; x++){
			for(int y = 0; y < c; y++){
				cout << "X.";
			}
			cout << "\n";
		}
		cout << "Enter number of rows and columns:" << endl;
		cin >> r >> c;
	}
	return 0;
}
