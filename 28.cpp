#include <iostream>

#include <cmath>
 
using namespace std;
 
int main()
{
   float e;
   cout << "e:";
   cin >> e;
   float ak1=0, ak=2;
   int k=1;
   while (abs(ak-ak1)>=e) {
       k++;
       ak1=ak;
       ak=2+1/ak1;
   }
   cout << "K = " << k << endl; 
   cout << "A(k-1) = " << ak1 << endl;
   cout << "A(k) = " << ak;
   return 0;
}
