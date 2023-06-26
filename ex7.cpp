#include <iostream>
#include <math.h>
using namespace std;
int main() {
	
	int N, K;
	cout << "Type number: ";
	cin >> N;
	K  = 1;
	while (N >= K*K) {
		K+=1;
	}
	cout << "K = " << K << endl;
	cout << "K*K = " <<K*K <<endl;
	cout << "(K-1)^2 = " << (K-1)*(K-1) << endl;
}
