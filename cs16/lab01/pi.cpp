#include <iostream> 
#include <cmath>
using namespace std;

double pi(int n){
        double b = 0;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
        for (int x = 0; x <= (n); x++){
                b += pow(-1, x)/(2*x+1);
        }
        return 4*b;
}


int main(){
	int n;
	do{
		cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
		cin >> n;
		if (n == 0){
			 cout << "The approximate value of pi using " << (n+1) << " term is: " << pi(n) << endl;
		}
		else if (n ==-1){
			break;
		}
			
		else{
			 cout << "The approximate value of pi using " << (n+1) << " terms is: " << pi(n) << endl;
		}
	}while (n!=-1);
	return 0;
}
	
