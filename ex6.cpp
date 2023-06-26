#include <iostream>
#include <math.h>
using namespace std;
int main() {
	
	int N, x;
	cout << "Type number: ";
	cin >> N;
	if (N%2 == 0) {
		x = 2;
	} else {
		x = 1;
	}
	int number;
	while (N >=x) {
		number *= N;
		N-= 2;
	} 
	
	cout << "N!! = " << number << endl;
}
