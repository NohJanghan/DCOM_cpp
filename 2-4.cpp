//4. implementation
#include <iostream>
using namespace std;

void swap(int* x, int* y) { //pass by adress
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main() {
    int a = 10, b = 20;
    cout << a << ", " << b << endl;
    swap(&a, &b);
    // swap(a, b);
    // 이것도 동작하는데 왜인지는 모르겠음
    cout << a << ", " << b << endl;

    return 0;
}