using namespace std;

int main()
{
    
    int n;
    cout << "N:";
    cin >> n;
    
    int f1 = 1, f2 = 1, f = 0;
 
    while (f < n) {
        f = f2 + f1;
        f2 = f1;
        f1 = f;
    }
    if (f==n)
        cout << "True";
    else
        cout<< "False";

    return 0;
}
