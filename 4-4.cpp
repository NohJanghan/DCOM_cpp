// 4.Hanoi tower
#include <iostream>
#include <cmath>
using namespace std;



void hanoi(int size, int from, int to)
{
    if(size == 1) {
        cout << from << " " << to << endl;
    } else {
        hanoi(size - 1, from, 6 - from - to);
        hanoi(1, from, to);
        hanoi(size - 1, 6 - from - to, to);
    }
}

int main() {
    int n;
    cin >> n;
    cout << pow(2, n) - 1 << endl;
    hanoi(n, 1, 3);

    return 0;
}