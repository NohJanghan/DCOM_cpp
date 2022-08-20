//1. GCD
#include <iostream>
using namespace std;


int main() {
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b= ";
    cin >> b;

    int r = 1;
    while (r)
    {
        if (a > b)
        {
            r = a % b;
            a = b;
            b = r;
        }
        else{
            r = b % a;
            b = r;
        }
        
    }
    
    cout << a;
    return 0;
}
