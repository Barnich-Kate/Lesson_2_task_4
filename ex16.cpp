#include <iostream>

using namespace std;

int main()
{
    int prob, day, n;
    cout<<"Type number: ";
    cin >> prob;
    n = 10;
    day = 1;
    while (n < 200) {
        n = n+n*(prob/100);
        day++;
    }
    cout << n << endl;
    cout << day << endl;

    return 0;
}
