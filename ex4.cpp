#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Type number more than 0: ";
    cin >> n;
    if (n < 0) {
        cout << "You type wrong number, please, type new more than 0:";
        cin >> n;
    }
    
    while (n >= 3) {
        n/=3;
        if (n==1){
           cout << "True" ; 
        } else {
            cout << "False";
        }
        
    }

    return 0;
}
