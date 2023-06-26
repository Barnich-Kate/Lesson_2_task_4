#include <iostream>
#include <math.h>
using namespace std;
int main() {
	
	int N, K, P;
	cout << "Type number N: ";
	cin >> N;
	K = 0;
	P = 1;
	while(P < N) {
		P *= 3;
		K += 1;
	}
	K -= 1;
		
	cout << "K = " << K << endl;
	cout << "3^K = " << pow(3,K) << endl;
	cout << "3^(K+1) = " << pow(3,K+1) << endl;

	return 0;
}
    
