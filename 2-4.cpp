//4
#include <iostream>
using namespace std;

int main() {
    int N = 0;
    cin >> N;

    int cycle = 0;
    int target = N;
    do
    {
        target = (target % 10) * 10 + (target % 10 + target / 10) % 10;
        cycle++;
    } while (target != N);
    cout << cycle;
    return 0;
}